#include <iostream>
#include "include/RouletteWheel.h"

using namespace std;

int main()
{
    cout<<"Creating roulette wheel"<<endl;
    RouletteWheel wheel;
    int money = 100;
    int bet = 1;
    cout<<"Start money: "<<money<<endl;
    for(int a=0; a<1000 && money > bet; a++){
        //subtract the bet.
        money -= bet;
        cout<<"Spin #"<<a+1<<" bet: "<<bet<<endl;
        //spin the wheel.
        RouletteResult spin = wheel.spin();
        //did we win?
        if(spin.color == RED){
            //we won.
            money += bet * 2;
            bet = 1;
            cout<<"\tWin! Money: "<<money<<endl;
        }
        else{
            //we lost.
            bet *= 2;
            cout<<"\tLose! Money: "<<money<<endl;
        }
    }
    cout<<"End money: "<<money;


    return 0;
}
