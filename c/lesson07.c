#include <stdio.h>
// the declare is very important, need matching as well
void singing(char name[], int num){
    printf("%s bless your soul\n", name);
    printf("I want %d cakes\n", num);
    printf("Let me go\n");

}
// data type function needs to match the return value
double temperature(double x){
    double result = (x * 9/5) + 32;
    return result;
}
int main (int argc, char *argv[]) {
    char name[] = "Nhan";
    int num = 13;
    singing(name, num);
    double feTemp = temperature(100);
    printf("%.2lf\n", feTemp);
    return 0;
}