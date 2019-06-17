#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
// #include <dos.h>
// #include <dir.h>

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
