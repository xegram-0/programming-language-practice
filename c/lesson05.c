#include <stdio.h>
#include <math.h>
int main (int argc, char *argv[]) {
    /*
        math stuff you can use:
        sqrt()
        pow(a,b)
        round()
        ceil() // round up
        floor // round down
        fabs() absolute
        log()
        sin(), cos(),tan()
        %d for int, %lf for double
    */
   int wheel;
   printf("\nHow many wheels do you have? ");
   scanf("%d", &wheel);
   if(wheel > 3){
    printf("\nYou have a car.");
   }
   else if(wheel == 3){
    printf("\nYou have a special motorbike with 3 wheels");
   }
   else{
    printf("\nYou have a motorbike.");
   }
    int point;
    printf("\nInput your point: ");
    scanf("%d", &point);
    // the case should be followed by int if compared to digit
    // or 'character' if char is used
    switch(point){
        case 10:
            printf("Perfect");
            break;
        case 9:
            printf("Well");
            break;
        case 8:
            printf("Good");
            break;
        case 7:
            printf("Fair");
            break;
        case 6:
            printf("Oh no");
            break;
        default:
            printf("Nothing works");
            // auto quit
    }
    // char temp
    // temp = toupper(temp) maybe from ctype.h
    return 0;
}