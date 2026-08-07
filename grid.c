#include <stdio.h>


int main(void){
int n;
printf("What is the grid size? input a # please \n");
scanf("%d", &n);




for (int row = 0; row < n; row++){
for (int col = 0; col < n; col++){
    printf("%d ", row * n + col + 1 );

    
}
printf("\n");
}


}