#include <stdio.h>
#include <stdbool.h>
int main (int argc, char *argv[]) {
    int age = 18;
    bool id = false;
    if (age >= 18 && id){
        printf("You are %d! You can join our bar.\n", age);
    }
    else if (age >= 18 && id==false){
        // in c, bool value is in 0 or 1
        //printf("You have %d id! You cannot join our bar.\n", id);
        printf("You have false id! You cannot join our bar.\n", id);

    }
    else if(age < 18){
        printf("You are %d. Get the hell out!", age);
    }
    else{
        printf("What the hell are you!");
    }
    /*
        && = and
        || = or
        ! = not (something)
    */
    return 0;
}