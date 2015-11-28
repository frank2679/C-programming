/* _print function: print arbitrary characters.  
 *
 *
 *
 */
int _print(char *);
int _print(char *output){
    int c, i = 0;
    while((c = output[i++])!= '\0')
        putchar(c);
    return 0;
}
