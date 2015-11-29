/* print its input one word per line
 *
 * 2015.11.29
 */
#include <stdio.h>
#define IN 1
#define OUT 0
main(){
    int c, nword = 0;
    int state;
    while ((c = getchar()) != EOF){
        if (c == ' ' || c == '\t' || c == '\n')
            state = OUT;
        else if (state == OUT){
            state = IN;
            printf("\n%c", c);
            nword++;
        } else 
            putchar(c);
    }
    printf("\nnumber of word: %d\n", nword);
}
