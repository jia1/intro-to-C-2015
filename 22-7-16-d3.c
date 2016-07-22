#include <stdio.h>

void pascal_2016();
int nCr(int n, int r);
int factorial(int x);
void prime_factorise_2016();
void pyramid_2016();

int main() {
    pascal_2016();
    return 0;
}

void pascal_2016() {
    int level, row, col;
    printf("Input level: ");
    scanf("%d", &level);
    for (row = 0; row < level; row += 1) {
        for (col = 0; col < level-1-row; col++) {
            printf(" ");
        }
        for (col = 0; col <= row; col++) {
            printf("%d ", nCr(row, col));
        }
        printf("\n");
    }
}

int nCr(int n, int r) {
    return factorial(n)/(factorial(n-r)*factorial(r));
}

int factorial(int x) {
    int answer = 1;
    for (; x > 0; x--) answer *= x;
    return answer;
}

void prime_factorise_2016() {
	unsigned long long int input, even = 0, odd = 0, divisor = 2;
	int first = 1;
	printf("Problems with prime factorisation? No worries, you've me. Input: ");
	scanf("%llu", &input);
	printf("%llu = ", input);
    while (input>divisor) {
        while (input%divisor) divisor++;
        while (!(input%divisor)) {
            if (first) {
                printf("%llu ", divisor);
                first = 0;
            } else {
                printf("x %llu ", divisor);
            }
            input /= divisor;
        }
	}
}

void pyramid_2016() {
    int base, i, s;
    printf("Input base number of stars (odd number): ");
    scanf("%d", &base);
    for (i = 1; i <= base; i += 2) {
        for (s = 0; s <= (base-i)/2; s++) {
            printf(" ");
        }
        for (s = 0; s < i; s++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
