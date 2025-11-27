/*Input Format

Two lowercase characters char1 and char2 separated by space.

Constraints

Input letters are lowercase a–z
char1 always comes before char2 in alphabetical order
Use ASCII arithmetic only*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

    int dist(char char1,char char2)
    {
        //here we are calculating the acsii values of both the characters and returning difference between them
        return char2-char1;
    }
int main() 
    {
        char character1,character2;
        scanf("%c %c",&character1,&character2);
        int distance=dist(character1,character2);
        printf("The distance between %c and %c is %d",character1,character2,distance);
        return 0;
    }
