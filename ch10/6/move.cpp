#include <iostream>
#include "move.h"

    

Move::Move(double a = 0,double b = 0)
{
    this->x = a;
    this->y = b;
}

void
Move::showmove()const
{
    std::cout << "x = " << this->x 
        << ", y = " << this->y << std::endl;
}
    
Move 
Move::add(const Move & m)const
{
    return (Move(x+m.x,y+m.y));
}

void 
Move::reset(double a,double b)
{
    this->x = a;
    this->y = b;
}