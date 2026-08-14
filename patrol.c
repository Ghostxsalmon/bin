

#include <stdio.h>


void advance(int *pos, int steps); // star goes in declarations

int main (){



    int position = 0;

    int *pos = &position;

    advance(pos, 3); // no star needed for calls
    printf("%d\n", *pos); // pos would cause the program to print the address, not the value. we need *pos
    printf("%p\n", (void*)pos); // pos is an int pointer, to use %p you need a void. type cast int to void pointer type

    advance(pos, 5); // no star needed for calls
    printf("%d\n", *pos); // pos would cause the program to print the address, not the value. we need *pos
    printf("%p\n", (void*)pos); // pos is an int pointer, to use %p you need a void. type cast int to void pointer type

    advance(pos, 10); // no star needed for calls
    printf("%d\n", *pos); // pos would cause the program to print the address, not the value. we need *pos
    printf("%p\n", (void*)pos); // pos is an int pointer, to use %p you need a void. type cast int to void pointer type



    return 0;
}

void advance(int *pos, int steps){

*pos = *pos + steps;

}
/*

 *pos is basically position

  pos is pointing at address.

 */
