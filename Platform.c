#include "Platform.h"
#include "Player.h"
#include "stdbool.h"

platform new_platform(int x, int y)
{
    platform plnk;
    
    plnk.x = x;
    plnk.y = y;

    return plnk;
}

int plnkls(platform plnk)
{
    return plnk.x;
}

int plnkrs(platform plnk)
{
    return plnk.x + PLATFORM_WIDTH - 1;
}

int plnkh(platform plnk)
{
    return plnk.y;
}


// Checks if the given player and platform are colliding
bool plnkcln(platform plnk, player plyr)
{
    if (((plyrbh(plyr) <= plnkh(plnk)) && (plyrbh(plyr) - plyr.Vy >= plnkh(plnk))) && (plnkls(plnk) <= plyrrs(plyr)) && (plnkrs(plnk) >= plyrls(plyr)))
        return true;
    else
        return false;
}

