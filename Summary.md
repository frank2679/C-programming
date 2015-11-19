The experience obtained from coding.

1. **Problem**: `$ gcc x.c` does not compile right if x.c use function cos(). But acos() works.  
   **Partial solution**: "gcc x.c -lm" link with math.h library while compile. 
2. **Problem**: chp1-3_char.c
    ```c
    while((s = getchar()) != EOF){
        putchar(s);
        ++numChar;
        
        if(s == '\n')
            ++numLine;
        
        if(s == ' ' || s == '\n' || s == '\t'){
            state = OUT;
            ++numWord;
        }else if (state == OUT){
            state = IN;
            //++numWord;
        }
    }
    ``` 
    The result is as follows, when I input "abcd <enter>" or "abcd <ctrl+d>": 
    ```
    abcd
    abcd

    ```
    **Solution**: Input maybe implemented with a queue. Input to a queue, <enter> or <ctrl+d> as an end. Then the queue is poped to the program. <enter> is in the queue, but <ctrl+d> is not in the queue. Only when <ctrl+d> works as EOF when it is single.    
