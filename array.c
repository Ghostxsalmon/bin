#include <stdio.h>


int chapter();

int main (void){
chapter();

}

int chapter(){
    char *squads[5];

    squads[0] = "blood angels" ;
    squads[1] = "Imperial Fists";
    squads[2] = "Flesh terrors";
    squads[3] = "Salamanders";
    squads[4] = "dark templars";
    
    printf("%s\n", squads[0] );
    printf("%s\n", squads[1] );
    printf("%s\n", squads[2] );
    printf("%s\n", squads[3] );
    printf("%s\n", squads[4] );

    return 0;
}
