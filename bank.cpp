#include <iostream>
#include "bank.h"

using namespace std;

Bank::Bank() {

    money = 20580;
    freeParkMoney = 0;
}

int Bank::getMoney(){

    return money;
}

int Bank::getFreeParkMoney(){

    return freeParkMoney;
}

void Bank::giveMoneyToBank(int amount){

    money = money + amount;
}

void Bank::takeMoneyFromBank(int amount){

    money = money - amount;
}

void Bank::giveMoneyToFreePark(int amount){

    freeParkMoney = freeParkMoney + amount;
}

int Bank::takeFreeParkMoney(){

    int tempParkMoney = freeParkMoney;
    freeParkMoney = 0;
    return tempParkMoney;
}

