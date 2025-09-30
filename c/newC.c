#include <stdio.h>

int main(){
    float num1 = 3.4;
    float num2 = 9.6;
    float num3 = 89.5;
    // normal mode
    printf("%f\n", num1);
    printf("%f\n", num2);
    printf("%f\n", num3);

    //number of digits after the decimal point
    printf("%0.3f\n", num1);
    printf("%0.2f\n", num1);
    printf("%0.1f\n", num1);
    
    // space before number
    printf("Number: %1.f\n", num1);
    printf("Number: %2.f\n", num2);
    printf("Number: %3.f\n", num3);

    // space behind number
    printf("Number: %-1.f\n", num1);
    printf("Number: %-2.f\n", num2);
    printf("Number: %-3.f\n", num3);
    return 0;
}