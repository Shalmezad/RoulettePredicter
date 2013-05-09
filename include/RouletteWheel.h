#ifndef ROULETTEWHEEL_H
#define ROULETTEWHEEL_H

enum RouletteColor
{
    RED,
    BLACK,
    NONE
};

struct RouletteResult
{
    int number; //note: -1 is 00, 0 is 0.
    RouletteColor color;
};

class RouletteWheel
{
    public:
        RouletteWheel();
        RouletteResult spin();
};

#endif // ROULETTEWHEEL_H
