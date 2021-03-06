#ifndef __PLAYER__
#define __PLAYER__

#define PLAYER_HEIGHT 4
#define PLAYER_WIDTH 5

// Chainging height may require editing player rendering function
#define PLAYER1  " _!_ "
#define PLAYER2  "(0_0)"
#define PLAYER3  " ||| "
#define PLAYER4  "_/ \\_"

#define GRAVITATION 0.1
#define JUMP_HEIGHT 1.5

typedef struct p
{
    int   x;
    float x_real;
    int   y;
    float y_real;

    float Vy;

} player;

// Create new player
player new_player(float x, float y, float Vy);

// Player left side
int plyrls(player plyr);
// Player right side
int plyrrs(player plyr);
// Player top height
int plyrth(player plyr);
// Player bottom height
int plyrbh(player plyr);
// Player y speed
int plyrvy(player plyr);


void player_mv(player* p, float dx, float dy);
void player_jmp(player* p);
void player_fall(player* p);
void player_upd(player* p);

#endif
