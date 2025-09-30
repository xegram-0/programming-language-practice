#include <stdio.h>
// this prevent the \n of the fgets
#include <string.h>
int main (int argc, char *argv[]) {
    // you can still use x += 1
    // and x -= 1, x *= 2, x /= 5, x %= 2
    char name[25];
    printf("What is your name? ");
    // if there is a space, the program is kinda crashed
    //scanf("%s", &name);
    fgets(name, 25, stdin);
    // remove the \n
    name[strlen(name)-1] = '\0';
    float weight;
    printf("How much do you weigh? ");
    // if you put \n, it would weird out the program input
    // leave it like this make thing easier
    scanf("%f", &weight);
    // this time, the name will have invisible \n after it

    printf("So %s are %.1f in kilograms.\n",name, weight);
    

    return 0;
}