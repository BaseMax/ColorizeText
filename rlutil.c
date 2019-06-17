#include <stdio.h>
#include "rlutil.h" // http://tapiov.net/rlutil/

int main(int argc, char* argv[]) {
	// http://tapiov.net/rlutil/docs/HTML/files/docs/APIReference-txt.html
	setColor(BLUE);
	printf("This is a sample text with custom color!\n");
	getch();
	return 0;
}
