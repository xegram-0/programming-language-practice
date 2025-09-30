#include <stdio.h>

int main (int argc, char *argv[]) {
    //bitwise: this is used for bits stuff
    /*
        & = and
        | = or
        ^ = xor
        z = x << 2 (shift left by 2)
        when shifting, the number 0 would be replace the empty shift area
        while the 1 would be gone
        0000,0001 >> 0000,0000
        << = left shift
        >> = right shift
        ~ = reverse/not = 0 would be 1 and 1 would be 0
    */
   int a = 8;
   int b = ~ a;
   printf("b :>> %d\n", b);
   printf("~a :>> %d\n", ~a);
   printf("~b :>> %d\n", ~b);
    /*
        Memory = array of bytes
        memory block = stack of house
        memory address = where that memory block
    */
   short c = 'x';
   char d = 'y';

   printf("sizeof(a) :>> %ld\n", sizeof(a));
   printf("sizeof(c) :>> %ld\n", sizeof(c));
   printf("sizeof(d) :>> %ld\n", sizeof(d));

    printf("%p\n", &a);
    printf("%p\n", &c);
    printf("%p\n", &d);

    // pointer = var that have the address of another value as its value 
    // i.e int a has 0x1235678 as its value, that value is an address 
    // that points to another var
    // * = indirection operator (value at address)
    // & = the address of var

    char name[5]="nhan";
    char *pName = &name;

    printf("&name/address :>> %p\n", (void *) &name);
    printf("pName/value :>> %p\n", (void *) pName);

    printf("value at stored address:>> %s\n", pName); // change the data %s from %p
    printf("value of name :>> %s\n", name);
    return 0;
    // good practice to initialize the value with NULL first
}