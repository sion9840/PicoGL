#include <stdio.h>
#include "graphics.h"

int main() {
	int gd = 0, gm;
	initgraph(&gd, &gm, "");

	getch();
	closegraph();

	return 0;
}