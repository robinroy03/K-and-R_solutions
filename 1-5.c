// program for converting farenheit to celsius

# include <stdio.h>

// formula is C = (5/9) * (F - 32)
// printing in reverse, from 300 -> 0, step is 20
// using for loop

void main() {
    for (int f = 300; f >= 0; f -= 20) {
        printf("%d\t%6.1f\n", f, (5.0)/(9.0)  * (f - 32));
    }
}