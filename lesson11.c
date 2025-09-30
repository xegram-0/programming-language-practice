#include <stdio.h>
#include <string.h>

//for random
#include <stdlib.h>
#include <time.h>
struct Student{
        char name[20];
        int age;
};

//typedef char teacher[25];
typedef struct{
    char name[20];
    int age;
    char subject[20];
} Teacher;
enum WeekofMonth{Week1 = 1, Week2 = 2, Week3 = 3, Week4 = 4};
int main (int argc, char *argv[]) {

    // if swap with array, use strcpy
    // if string len is somehow less than the 1st one, try use fixed len array
    // struct = collection of related members = class
    struct Student s1;
    strcpy(s1.name, "Nhan");
    s1.age = 23;
    printf("s1.name :>> %s\n", s1.name);
    printf("s1.age :>> %d\n", s1.age);
    
    //typedef = give nickname to an already datatype
    // with struct, it would be "struct Teacher t1"
    Teacher t1 = {"Nhan", 23, "English"};
    printf("t1.name :>> %s\n", t1.name);
    printf("t1.age :>> %d\n", t1.age);
    printf("t1.subject :>> %s\n", t1.subject);
    
    //struct Student students[] = {s1, s2, s3, s4};

    //enum is for int, not string, made to be more readable
    // <name> = <value> i.e Sun = 7, mon = 1
    enum WeekofMonth thisMonth = Week2;
    printf("thisMonth :>> %d\n", thisMonth);

    //use current time as a seed
    srand(time(0)); // this sets the random to be activated each time you run the program
    // rand() generates from 0 - 32,000 somthing
    int num1 = (rand() % 6) + 1; // where the random calculations begin
    printf("num1 :>> %d\n", num1);
    return 0;
}