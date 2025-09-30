#include <stdio.h>
#include <stdbool.h>

int main(){
    // so this is how to do commment
    /*
        bunch of comments

    */

    printf("Hey there C\n");
    printf("I \t hate \t working\n");
    printf("\"Sometimes it takes a real man to become the best girl\" - Gigguk\n");
    int value; // declaration
    value = 13; // initialization
    char rank = 'a';
    float point = 3.44455225;
    char name[] = "math";
    printf("Here are %d reports\n", value);
    printf("This is your name: %s\n", name);
    printf("This is your rank: %c\n", rank);
    printf("Here is your float %f\n", point);

    double d = 3.444423212321432543543; // more precision but more memories
    printf("%0.14lf\n", d);
    printf("%f", point);
    bool isFlat = true; // need stdbool.h
    printf(" it is %d\n", isFlat);
    char f = 120; // ascii for display using %c // already signed
    unsigned char g = 225; // exceed the limit of char
    short int i = 32767; // exceed counter overflow, reset to the lowest value
    // short is ok
    unsigned short mama = 12;
    long long int aLongNumber = 900000000; 
    return 0;
} 