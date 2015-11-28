/* convert input char to lower case and print 
 *
 *
 *
 */
#include <stdio.h>
#include <ctype.h>

int main (int argc, char **argv){ // pointer to pointer, *argv[] 
    printf("%s\n", argv[1]); // print string.
    int c, i = 0;
    while ((c = argv[0][i])!= '\0'){
        putchar(c);
        i++;
    }
    return 0;
}
