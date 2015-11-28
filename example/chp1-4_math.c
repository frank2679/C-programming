/* link with math library.
 * gcc x.c -lm
 * frank
 * 2015.11.19
 */
#include <stdio.h>
#include <math.h>

int main (){
    int a;
    scanf("%d", &a);
    printf("%f\n", cos(a));
    return 0;
}
