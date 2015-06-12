// Author: Raven Liu
// Date: 05/06/2015
// ROF13 project

#include "stdio.h"

int main(){
    char c;
    while (scanf("%c", &c) != EOF){ // Read a character from stdin per loop and stop at end of file
        if ((c >= 'a') && (c <= 'z')){ // Check whether the character is lower case
            c -= 32; // If yes, change it to upper case
        }
        if ((c >= 'A') && (c <= 'Z')) { // Check whether the character is an alphabet
            c += 13; // If yes, move the character forward by 13 places for encryption
            if (c > 'Z') // Check whether the character exceed the range between alphabet 'A' and 'Z'
                c -= 26; // If yes, move the character backward by 26 places returning into the range
        }
        printf("%c", c); // Output the character to stdout
    }
    return 0;
}
