// power(x,y) --> x ** y 

# include <stdio.h>
# include <stdint.h>

int64_t power(int64_t, int64_t);

int main() {
    printf("%lld", power(10,10));
}

int64_t power(int64_t a, int64_t b) {
    int64_t solution = 1;
    for (int i = 0; i < b; i++) {
        solution = solution * a;
    }
    return solution;
}