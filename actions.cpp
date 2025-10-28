#include <iostream>

#include "actions.h"

using namespace std;

int makeMove(Bank &bank, Player players[], int playerTurn, int diceRoll)
{
    // TODO: Implement this function
    int newLocation = players[playerTurn].getLocation() + diceRoll ;

    if(newLocation > 39 ){
        newLocation -= 40;
        players[playerTurn].giveMoneyToPlayer(200);
        bank.takeMoneyFromBank(200);
    }

    players[playerTurn].setLocation(newLocation);

    return players[playerTurn].getLocation();
}

void makeAction(Bank &bank, Player players[], Space spaces[], int playerTurn, int newSpace)
{
    // TODO: Implement this function
    if(spaces[newSpace].getType() == "Property" || spaces[newSpace].getType() == "RailRoad" || spaces[newSpace].getType() == "Utility"){
        if(spaces[newSpace].getOwner() == -1 && players[playerTurn].getMoney() >= spaces[newSpace].getBuyingCost() * 5){
            players[playerTurn].takeMoneyFromPlayer(spaces[newSpace].getBuyingCost());
            bank.giveMoneyToBank(spaces[newSpace].getBuyingCost());
            spaces[newSpace].setOwner(players[playerTurn].getId());

            cout << "Player " << players[playerTurn].getId() + 1 << " bought " << spaces[newSpace].getName() << "!" << endl;
        }
        else if(spaces[newSpace].getOwner() == players[1-playerTurn].getId()){
            players[playerTurn].takeMoneyFromPlayer(spaces[newSpace].getRent());
            players[1-playerTurn].giveMoneyToPlayer(spaces[newSpace].getRent());

            cout << "Player " << players[playerTurn].getId() + 1 << " gave " << spaces[newSpace].getRent() << "€ to the other player!" << endl;
        }
    }

    else if(spaces[newSpace].getType() == "Tax"){
        players[playerTurn].takeMoneyFromPlayer(spaces[newSpace].getTax());
        bank.giveMoneyToFreePark(spaces[newSpace].getTax());

        cout << "Player " << players[playerTurn].getId() + 1 << " paid " << spaces[newSpace].getTax() << "€ for taxes to the bank!" << endl;
    }

    else if(spaces[newSpace].getType() == "FreeParking"){
        players[playerTurn].giveMoneyToPlayer(bank.takeFreeParkMoney());

        cout << "Player " << players[playerTurn].getId() + 1 << " took all the money from Poseidi!" << endl;
    }

    else if(spaces[newSpace].getType() == "GoJail"){
        players[playerTurn].setLocation(10);
        players[playerTurn].takeMoneyFromPlayer(200);
        bank.giveMoneyToFreePark(200);

        cout << "Player " << players[playerTurn].getId() + 1 << " gave 200€ to Poseidi!" <<  endl;
    }

}
