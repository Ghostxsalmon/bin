#include <stdio.h> 

int buggy();
int strawhat();

int main (void){
    buggy();
   strawhat(); 
}
int buggy(){
    for(int i = 0; i <= 5; i = i + 1)
    printf("You're going down this time strawhat!\n");
    
}

int strawhat(){
    int e = 0;
    while(e < 1){
        e = e + 1;
        printf("not this time clown!\n");
    }
}