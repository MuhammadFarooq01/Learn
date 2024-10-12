/* 
This program prints the ASCII values and there corresponding characters 
for the printable character in the ASCII table

The ASCII values range is from 33 to 126 because:
    33 --> '!' is 1st printable character
    126 --> '~' is last printable character
*/

#include <stdio.h>

int main()
{
    int ASCII = 33;
    char character;
    for (ASCII; ASCII <= 126; ASCII++)
    {
        character = (char)ASCII;
        printf("\nThe ASCII value %d corresponds to the character '%c'", ASCII, character);
    }

    return 0;
}