/* counting of character, line and word
 * frank
 * 2015.11.19
 */

#include <stdio.h>

#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */

int main (int argc, int argv[]){
    printf("%d\n\n", EOF);// EOF = -1

    int numChar = 0, numLine = 0,  numWord = 0;
    /* redirect a file*/
    char s;
    int state = OUT;
    while((s = getchar()) != EOF){
        putchar(s);
        ++numChar;
        
        if(s == '\n')
            ++numLine;
        
        if(s == ' ' || s == '\n' || s == '\t'){
            state = OUT;
        }else if (state == OUT){
            state = IN;
            ++numWord;  // count when get into a word.
        }
    }
    printf("The number of char, line and words are %d, %d, %d.\n", 
            numChar, numLine, numWord); 
    return 0;
}
