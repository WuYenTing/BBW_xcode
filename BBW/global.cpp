#include "global.h"

bool next_window = false;
int window = 0;
bool mode_next_window = false;
int mode_window = 0;
bool esc = false;
int select_capture = -1, select_deathmatch = -1;
bool key_state[ALLEGRO_KEY_MAX] = {false};

bool p1_boxinggloves_trigger = false;
bool p2_boxinggloves_trigger = false;
bool p3_boxinggloves_trigger = false;
bool p4_boxinggloves_trigger = false;

int max_speed = 10;
int min_speed = 2;

int add_life = 10;
int minus_life = 20;
