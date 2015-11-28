/* Transform between Celsius and Fahrentiet
 * Frank
 * 2015.11.19
 */
#include <stdio.h>
int main (){
    double celsius;
    double fahr;
    const int low = 0, step = 20, up = 300;  
    printf("Fahrenteit to Celsius\n");
    for(fahr = low; fahr <= up; fahr += step){
        celsius = (5.0/9.0)*(fahr-32.0);
        printf("%.lf\t%.3lf\n", fahr, celsius);
    }
    printf("\nCelsius to Fahrenteit\n");
    for(celsius = low-50; celsius <= up; celsius += step){
        fahr = celsius*9.0/5.0 + 32.0;
        printf("%.lf\t%.3lf\n", celsius, fahr);
    }
    return 0;
}
