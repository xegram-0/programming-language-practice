#include <stdio.h>
void hello(char name[], int age); // prototype
int findMin(int a, int b){
    // short way for a large if else stuff
    return (a < b)? a : b;
}
int main (int argc, char *argv[]) {
    int a = 7;
    int b = 7;
    int result = findMin(a,b);
    printf("%d\n", result);
    char name[] = "Nhan";
    int age = 23;
    hello(name, age);
    return 0;
}
void hello(char name[], int age){
    printf("%s is your name.\n", name);
    printf("%d is your age.\n", age);
}
// function prototype
// function declaration without anything in it before the main()
// make sure the real function is called with right arguments
// if not used, the program runs weirdly