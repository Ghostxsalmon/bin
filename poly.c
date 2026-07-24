#include <stdio.h>
#include <math.h>


double whats_x(void); // be consistent. does the function take arguements?
double poly(double x); // keep it the same all the way through. 

int main (void){
    int x = whats_x(); // ask the question, what's x ? 
    int p = poly(x); // take that x and inject it into our math function
    printf("\n answer = %lf\n", p); // print the answer
    return 0;
}


double whats_x(void){ 
    double x;
    printf("what is the value of x? \n");
    scanf("%lf", &x);
    return x;
}


double poly(double x){
    printf("the Polynomial being solved for is 3x + 2 - 4^2 + 6x"); // telling what we are solving
    double p = 3*(x) + 2 - pow(4, 2) + 6*(x); // the math itself
    return p; 
    /* Notice this p variable and the x variable in whats_x() are different 
    than the one in our main() they operate at different scopes. if I 
    wanted to do z or y or whatever in my function blocks i could,
    i made p match p and x match x for simplicity.
    */
}


