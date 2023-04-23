#include <stdio.h>
#include <conio.h>

int main()
{
    char c;

    printf("Press any key to continue...\n");
    c = gets();  // Wait for the user to press a key
    printf("You pressed the '%c' key (ASCII code %d)\n", c, (int) c);

    return 0;
}

