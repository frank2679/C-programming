The experience obtained from coding.
Rules: command or code with "xxx".
1. Problem: `$ gcc x.c` does not compile right if x.c use function cos(). But acos() works. 
*Partial solution*: "gcc x.c -lm" link with math.h library while compile. 
