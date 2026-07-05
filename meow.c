#include <stdio.h>

int main(void)
{
    int i = 3;
    while (i > 0)
    {
        printf("meow\n");
        i--; // remeber you can do -= or -- if you're subtracting one in a checker.
    }
} 

for (int i = 0; i < 3; i++) /* this is how for loops work. 
chunk 1 is how it is initalized.
chunk 2 is your boolean expression, for chunk two you do not strictly need this, you could have it go forever.
chunk 3 is the process of what its doing. that last chunk will not run until it runs whats through the {} first. in this case print meow. it does this everytime. */
{
    printf("meow\n");
}
