#include <stdio.h>
#include <conio.h>

int main()
{
    clrscr(); // Clears the console screen
    
    textcolor(YELLOW); // Sets the text color to yellow
    textbackground(BLUE); // Sets the background color to blue
    
    printf("Hello World!"); // Prints "Hello World!" to the console
    
    getch(); // Waits for a keypress
    
    return 0;
}

