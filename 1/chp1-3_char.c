#include <stdio.h>
int main (){
    int c;

    c = getchar();
    while(c != EOF){
        putchar(c);
        c = getchar();
    }
    printf("%d\n", EOF);// EOF = -1
    return 0;
}
