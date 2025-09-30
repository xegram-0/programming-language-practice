#include <stdio.h>

int main (int argc, char *argv[]) {
    const float PI = 3.14455;
    //PI = 3; // error for changing the constant value
    printf("%f\n", PI);
    // ++ instead of +=
    // -- instead of -=
    // % modulus 
    //
    int n1 = 9;
    int n2 = 4; // or change it to float type, has to be the divisor
    int n3 = n1/n2;
    printf("n3 :>> %d\n", n3);
    float n4 = n1/n2;
    printf("n4 :>> %.2f\n", n4);
    float n5 = n1/(float) n2;
    printf("n5 :>> %.2f\n", n5);
    return 0;
}