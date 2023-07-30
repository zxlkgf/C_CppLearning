// file2.cpp -- contains functions called in file1.cpp
#include <iostream>
#include <cmath>
#include "coordin.h"

// convert rectangular to polar coordinates
polar rect_to_polar(rect xypos)
{
    using namespace std;
    polar ans;
    ans.distance = sqrt(xypos.x * xypos.x + xypos.y * xypos.y );
    ans.angle = atan2(xypos.y, xypos.x);
    return ans;
}

// show polar coordinates,converting angle to degress
void show_polar(polar dapos)
{
    using namespace std;
    const double Rad_to_deg = 57.29577951;

    cout << "distance = " << dapos.distance;
    cout << ", angle = " << dapos.angle * Rad_to_deg;
    cout << ", degrees\n";
}