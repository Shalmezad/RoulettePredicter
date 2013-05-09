#include "../include/RouletteWheel.h"

#include <stdlib.h>
#include <time.h>

RouletteWheel::RouletteWheel()
{
    //seed the RNG
    srand (time(NULL));
}//RouletteWheel()

RouletteResult RouletteWheel::spin()
{
    //create the new result.
    RouletteResult newSpin;
    //pick a number,
    newSpin.number = rand() % 38 - 1;
    int num = newSpin.number;
    //Figure out the color:
    //green (00 or 0)
    if(num == -1 || num == 0){
        newSpin.color = NONE;
    }
    //red (1,3,5,7,9,12,14,16,18,19,21,23,25,27,30,32,34,36
    else if(num == 1 || num == 3 || num == 5 ||
            num == 7 || num == 9 || num == 12 ||
            num == 14 || num == 16 || num == 18 ||
            num == 19 || num == 21 || num == 23 ||
            num == 25 || num == 27 || num == 30 ||
            num == 32 || num == 34 || num == 36)
    {
        newSpin.color = RED;
    }
    else
    {
        newSpin.color = BLACK;
    }
    return newSpin;
}//spin()
