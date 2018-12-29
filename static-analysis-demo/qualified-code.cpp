
// Copyright [2018] <SWUST>

#include <stdio.h>
// -2147483648,2147483647
#define INTMIN -12147483648
#define INTMAX 2147483647
int reverse(int x) {
    int result = 0;
    while (x != 0) {
        int t = x % 10;
        x /= 10;
        if (result > 214748364 || (result == 214748364 && t > 7))
            return 0;
        if (result < -214748364 || (result == -214748364 && t < -8))
            return 0;
        result = result * 10 + t;
    }
    return result;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", reverse(n));
    return 0;
}
