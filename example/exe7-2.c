/* _print function: print arbitrary characters.  
 *
 * 11.28 
 */
#include <stdio.h>
#include <ctype.h>
#include "exe1-10.h"

int main (int argc, char **argv){ // pointer to pointer, *argv[] 
    int count;
    count = printf("%s\n", argv[1]); //format 'print' print string, return count of character.
    printf("%d\n",count);

    int c;
    while ((c = getchar())!= EOF){
        _print(c);
        //putchar(c);
    } 
    return 0;
}
