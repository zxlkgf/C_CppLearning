// tv.cpp 
#include <iostream>
#include "tv.h"

bool Tv::volup()
{
    if(volume < maxVal)
    {
        volume++;
        return true;
    }
    return false;

}

bool Tv::voldown()
{
    if(volume > minVal)
    {
        volume--;
        return true;
    }
    return false;
}

void Tv::chanup()
{
    if(channel < maxchannel)
    {
        channel++;
        return;
    }
    channel = 1;
}

void Tv::chandown()
{
    if(channel > 1)
    {
        channel--;
        return;
    }
    channel = 1;
}

void Tv::settings() const
{
    using namespace std;
    cout << "Tv is " << ((state == off)?"off":"on") << endl;
    if(state == on)
    {
        cout << "Volume setting = " << volume << endl;
        cout << "Channel setting = " << channel << endl;
        cout << "Mode = " << ((mode == Antenna)?"Antenna":"Cable") << endl;
        cout << "Input = " << ((input == TV)?"TV":"DVD") << endl;
    }
}