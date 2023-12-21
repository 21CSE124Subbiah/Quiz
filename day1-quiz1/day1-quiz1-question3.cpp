#include <stdio.h>
#include<math.h>
double evaluatePolynomial(int degree, int coefficients[], double x) {
    double result = 0.0;

    for (int i = 0; i <= degree; i++) {
        result += coefficients[i] * pow(x, degree - i);
    }

    return result;
}

int main() {
    
    int degree;
    
    printf("Enter the degree of the polynomial: ");
    scanf("%d", &degree);

    int coefficients[degree + 1];

    printf("Enter the coefficients: ");
    for (int i = 0; i <= degree; i++) {
        scanf("%d", &coefficients[i]);
    }

    double x;

    printf("Enter the value of x: ");
    scanf("%lf", &x);
    double result = evaluatePolynomial(degree, coefficients, x);
    printf("P(%.2f) = %.2f\n", x, result);

    return 0;
}

