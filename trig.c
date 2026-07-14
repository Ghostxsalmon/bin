#include <stdio.h>
#include <math.h>

/* Ratio-first right-triangle helper.
 * Spec:
 *  - Ask ratio first: 1=sin, 2=cos, 3=tan
 *  - Only request the two sides that ratio needs
 *  - Output BOTH decimal ratio AND angle in degrees
 *
 * Formulas:
 *  sin = opp/hyp  → angle = asin(ratio) * 180/PI
 *  cos = adj/hyp  → angle = acos(ratio) * 180/PI
 *  tan = opp/adj  → angle = atan(ratio) * 180/PI
 *
 * Status: skeleton + planned prototypes.
 * Next: menu + scanf choice in main, then implement side getters as float.
 *
 * Use float/double (not int) for sides. Compile with: gcc trig.c -o trig -lm
 * No cs50.h — printf/scanf only.
 */

float hypotenuse(void);
float adjacent(void);
float opposite(void);

int main(void)
{
    /* Step 2 next: printf menu 1=sin 2=cos 3=tan, scanf choice, echo it */
    return 0;
}

/* Stubs — implement after menu works. Each should prompt, scanf, return side. */
/*
float opposite(void) {
    return 0.0f;
}

float adjacent(void) {
    return 0.0f;
}

float hypotenuse(void) {
    return 0.0f;
}
*/
