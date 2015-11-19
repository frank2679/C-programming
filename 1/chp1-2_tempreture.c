#include <stdio.h>
int main (){
    int c, f;
    for(;;){
        scanf("%d",&f);
        c = (5.0/9.0)*(f-32.0);
        printf("%d, %d", f, c);
    }
    return 0;
}
