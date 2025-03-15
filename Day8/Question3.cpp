// Available notes in given money

#include <iostream>
using namespace std;
int main(){

    int money;
    cout << "Enter the amount of money: ";
    cin >> money;

    int temp=1;
    int updateMoney,oldMoney;

    switch(temp){
        case 1:
            oldMoney = money/500;
            updateMoney = money - (oldMoney*500);
            cout <<  "500rs notes: " << oldMoney << endl;

        case 2:
            oldMoney = updateMoney/200;
            updateMoney -= oldMoney*200;
            cout << "200rs notes: " << oldMoney << endl;

        case 3:
            oldMoney = updateMoney/100;
            updateMoney -= oldMoney*100;
            cout << "100rs notes: " << oldMoney << endl;

        case 4:
            oldMoney = updateMoney/50;
            updateMoney -= oldMoney*50;
            cout << "50rs notes: " << oldMoney << endl;

        case 5:
            oldMoney = updateMoney/20;
            updateMoney -= oldMoney*20;
            cout << "20rs notes: " << oldMoney << endl;

        case 6:
            oldMoney = updateMoney/10;
            updateMoney -= oldMoney*10;
            cout << "10rs notes: " << oldMoney << endl;   

        case 7:
            oldMoney = updateMoney/5;
            updateMoney -= oldMoney*5;
            cout << "5rs coin: " << oldMoney << endl;   

        case 8:
            oldMoney = updateMoney/2;
            updateMoney -= oldMoney*2;
            cout << "2rs coin: " << oldMoney << endl;   

        case 9:
            oldMoney = updateMoney/1;
            updateMoney -= oldMoney*1;
            cout << "1rs coin: " << oldMoney << endl;   
    }

    return 0;
}