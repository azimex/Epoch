#include "Color.h"

/*
	Function: 	initializes the color pairs
	@param:		-
	@return:	-
*/
void Color::init(){
		init_pair(0, COLOR_BLACK, COLOR_BLACK);
		init_pair(1, COLOR_RED, COLOR_RED);
		init_pair(2, COLOR_GREEN, COLOR_GREEN);
		init_pair(3, COLOR_YELLOW, COLOR_YELLOW);
		init_pair(4, COLOR_BLUE, COLOR_BLUE);
		init_pair(5, COLOR_MAGENTA, COLOR_MAGENTA);
		init_pair(6, COLOR_CYAN, COLOR_CYAN);
		init_pair(7, COLOR_WHITE, COLOR_WHITE);
	}