/* _print function: print arbitrary characters.  
 *
 *
 *
 */
#include <stdio.h>
#include <ctype.h>
#include "print.h"

int main (int argc, char **argv){ // pointer to pointer, *argv[] 
    int count;
    count = printf("%s\n", argv[1]); //format 'print' print string, return count of character.
    printf("%d\n",count);
    _print(argv[1]);
    return 0;
}
/*
int _print(char *output){
    int c, i = 0;
    while((c = output[i++])!= '\0')
        putchar(c);
    return 0;
}
*/
