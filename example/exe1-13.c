/* print histogram of lengths of words in its input 
 *
 * 2015.11.29
 */
#include <stdio.h>
#define MAXWORDLEN 10
int max_search(int *, int length);
main(){
    int c, i, nwhite, nother;
    int ndigit[10];

    nwhite =nother = 0;
    for (i = 0; i < 10; ++i)
        ndigit[i] = 0;

    while((c = getchar()) != EOF){
        if(c >= '0' && c <= '9')
            ndigit[c-'0']++;       // COOL
        else if (c == ' '|| c == '\t' || c == '\n')
            nwhite++;
        else
            ++nother;
    }
    printf("digits = ");
    for (i = 0; i < 10; i++)
        printf("%d ", ndigit[i]); 
    printf("white space = %d, others = %d.\n", nwhite, nother);
    /* horizen histogram */
    int index;
    for (i = 0; i < 10; ++i){
        printf("%d:", i);
        for (index = 0; index < ndigit[i]; index++){
            putchar('*');
        }
        putchar('\n');
    }
    /* vertical histogram */
    // find the maximum value
    int max; 
    max = max_search(ndigit, 10);
    int index_t; //index for table
    for (index_t = max; index_t > 0; index_t--){
        printf("%2d|", index_t);
        for(i = 0; i < 10; i++)
            if (ndigit[i] >= index_t){
                putchar('*');
                putchar(' ');
            }
            else{ 
                putchar(' ');
                putchar(' ');
            }
        putchar('\n');
    }    
    printf("  +-------------------\n");
    printf("   0 1 2 3 4 5 6 7 8 9\n");
}

/* max_search function */
int max_search(int arr[], int length){
    int i, max; 
    for(i = 0, max = arr[0]; i < length; ++i)
        if (arr[i] > max)
            max = arr[i];
    return max;
}
