#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
// #include <dos.h>
// #include <dir.h>

/*
Color List:

	Name         | Value
		     |
	Black        |   0
	Blue         |   1
	Green        |   2
	Cyan         |   3
	Red          |   4
	Magenta      |   5
	Brown        |   6
	Light Gray   |   7
	Dark Gray    |   8
	Light Blue   |   9
	Light Green  |   10
	Light Cyan   |   11
	Light Red    |   12
	Light Magenta|   13
	Yellow       |   14
	White        |   15
*/

void setColor(int color) {
	WORD colorWord;
	HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO buffer;
	if(GetConsoleScreenBufferInfo(output, &buffer)) {
		colorWord = (buffer.wAttributes & 0xF0) + (color & 0x0F);
		SetConsoleTextAttribute(hStdOut, colorWord);
	}
}

int main(void) {
	setColor(4);
	printf("This text a sample text with Red color!\n");
	getch(); // C++: cin.get();
	return 0;
}
