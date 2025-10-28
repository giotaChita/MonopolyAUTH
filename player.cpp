#include <iostream>
#include <sstream>

#include "player.h"

using namespace std;

Player::Player(int playerId) {

    id = playerId;
    name = "Player";
    money = 1500;
    location = 0;
}

int Player::getId(){

    return id;
}

int Player::getLocation(){

    return location;
}

int Player::getMoney(){

    return money;
}

string Player::getName(){

    return name;
}

void Player::setLocation(int spaceNum){

    location = spaceNum;
}

void Player::giveMoneyToPlayer(int amount){

    money += amount;
}

void Player::takeMoneyFromPlayer(int amount){

    money -= amount;
}

// TODO: Implement here the methods of Player
