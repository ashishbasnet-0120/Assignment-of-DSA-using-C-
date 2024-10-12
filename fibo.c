#include <stdio.h>

void fibo(int n);

int main() {
    int n;
    printf("Enter how many terms: ");
    scanf("%d", &n);
    fibo(n);
    return 0;
}

void fibo(int n) {
    int a = 0, b = 1, sum;
    for (int i = 0; i < n; i++) {
        printf("%d\t", a);
        sum = a + b;
        a = b;
        b = sum;
    }
}