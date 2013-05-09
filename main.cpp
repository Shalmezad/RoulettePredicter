#include <iostream>
#include "include/RouletteWheel.h"

using namespace std;

int main()
{
    cout<<"Creating roulette wheel"<<endl;
    RouletteWheel wheel;
    cout<<"Spinning wheel 100 times:"<<endl;
    for(int a=1; a<=100; a++)
    {
        RouletteResult spin = wheel.spin();
        cout<<"Spin #"<<a<<": ";
        cout<<"Number: ";
        if(spin.number == -1){
            cout<<"00";
        }
        else{
            cout<<spin.number;
        }
        if(spin.color == RED){
            cout<<" Color: Red";
        }
        if(spin.color == BLACK){
            cout<<" Color: Black";
        }
        cout<<endl;
    }
    return 0;
}
