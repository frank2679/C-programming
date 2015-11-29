/* _print function: print arbitrary characters.  
 *
 *
 *
 */
#include <stdarg.h>
int _print(char c);
int _print(char c){
    int i = 0;
    switch (c){
        case '\t':
            printf("\\t");
            break;
        case '\\':
            printf("\\\\");
            break;
        default:
            putchar(c);
            break;
    }
    return 0;
}
