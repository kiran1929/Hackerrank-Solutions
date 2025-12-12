/*
Input Format

Three space-separated integers: {hours} {minutes} {seconds}

Constraints

0 ≤ hours ≤ 100
0 ≤ minutes < 60
0 ≤ seconds < 60
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

    int toSeconds(int hours, int minutes, int seconds)
    {
        //here we are calculating the given input to total seconds
        int total_value= hours*3600+ minutes*60+seconds;
        return total_value;
    }

int main() {

    int hours_input,minutes_input,seconds_input;
    scanf("%d %d %d ",&hours_input,&minutes_input,&seconds_input);
    int total_seconds=toSeconds(hours_input,minutes_input,seconds_input);
    printf("Total seconds: %d",total_seconds);
    return 0;
}
