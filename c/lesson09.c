#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[]) {
    char name1[] = "God";
    char name2[] = "Nhan";
    //strlwr(name1);    //lower
    //strupr(name2);    //upper
    //strcat(name1, name2);     //append n2 to n1
    //strncat(name1, name2, 1);     //append n.o characters from n2 to n1
    //strcpy(name1, name2);     //copy n2 to n1
    //strncpy(name1, name2, 1); //copy from n2 how many characters to n1

    //strset(name1, '#'); // this does not work
    //strnset
    //strrev(name1);
    printf("name1 :>> %s\n", name1);
    /*
    strlen() //len
    strcmp(n1,n2) //compare with case sensitive
    strncmp(n1,n2, index) // same with limit number
    strcmpi(n1,n2) // same but ignore case sensitive
    stricmp(n1,n2, index) // with limit of number
    */

    /* for (int i = 0; i < 10; i++)
    {
        
        printf("%d\n", i);
    } 
    */

    // need to declare this first
    int i = 1;
    /* while (i < 10)
    {
        
        printf("%d sheep...\n", i);
        i++;
    } */
    do {
        /* code here */ 
        printf("%d", i);
        i++;
    } while(i < 10);
    return 0;
}