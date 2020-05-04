#include<stdio.h>
#include "snake_s.h"

int main()
{
	start_up();
	snake_init();
	while(Game==0)
	{
		print_s();
		screen_reset_position();
		random_f();
		movement();
		tail_remove();
		Sleep(speed);							//getting into the sleeping mode for 99ms will be increment while playing
	}		
}
