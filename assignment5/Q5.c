#include <stdio.h>
#include <math.h>

double evaluatePolynomial(int coeffs[], int degree, int x) {
    double result = coeffs[0]; 

    for (int i = 1; i <= degree; i++) {
        result = result * x + coeffs[i];
    }

    return result;
}

int main() {
    int degree, x;

    printf("Enter the degree of the polynomial: ");
    scanf("%d", &degree);

    int coeffs[degree + 1]; 

    printf("Enter the %d coefficients from highest to lowest degree:\n", degree + 1);
    for (int i = 0; i <= degree; i++) {
        scanf("%d", &coeffs[i]);
    }

    printf("Enter the value of x: ");
    scanf("%d", &x);

    double result = evaluatePolynomial(coeffs, degree, x);

    printf("The polynomial value at x = %d is: %.2f\n", x, result);

    return 0;
}
