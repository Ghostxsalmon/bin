#include <stdio.h>

//Prototypes
int for_loop();
int while_loop();
int do_while_loop();



int main (void){

    for_loop();
    while_loop();
    do_while_loop();
}




int for_loop(){

    printf("\nfor loop\n");
    for (int x=1; x <= 20; x++){
        printf("%d \n", x);
    }

    return 0;
}




int while_loop(){

    printf("while loop\n");

    int y = 0;
    while( y < 20 ){
        y++;
        printf("%d\n", y);
    } 

}



int do_while_loop(){

    printf("do while loop\n");

    int z = 0;
    do {
        printf("%d\n", z);
        ++z;
    } while ( z < 20);


}

