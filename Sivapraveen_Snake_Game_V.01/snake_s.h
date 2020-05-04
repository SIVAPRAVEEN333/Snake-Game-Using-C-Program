#ifndef SNAKE_S_H_
#define SNAKE_S_H
	
extern int speed,Game;

void start_up();
void print_s();
void snake_init();
void screen_reset_position();
int random_f();
void movement();
int getch_noblock();
void tail_remove();
void game_o();

#endif /* SNAKE_S_H */
