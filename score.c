#include <stdio.h>

/*
// Old way of doing it

int main(void)
{
    int score1 = 72;
    int score2 = 73;
    int score3 = 33;

    printf("Average: %f\n", (score1 + score2 + score3) / 3.0); // adding a decimal will keep it as floating point math
}

*/ 

/*

Intro to array's

int score[3]; // this is an array, give me enough memory for these 3 integers 

scores[1] = 72; // go into array at [x] location and put this value there.

scores[2] = 73;

scores[3] = 33;
*/

/*

This is better but still you shouldn't see this copy/paste style code, use a loop! 
int main(void){
    int scores[3];
    scores[0] = 72;
    scores[1] = 73;
    scores[2] = 33;
    // you told the computer, give me enough memory for 3 ints. if you need more ints, go back up and adjust the needed size for the array. Do not just add more to the array w/o adjusting the array size.

    printf("Average: %f\n", (scores[0] + scores[1] + scores[2] / 3.0))
}
    
*/

// This would be the ideal code example, using a loop.
int main(void) {
    int scores[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter score %d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    int sum = scores[0] + scores[1] + scores[2];
    printf("Average: %f\n", sum / 3.0);

    return 0;
}
