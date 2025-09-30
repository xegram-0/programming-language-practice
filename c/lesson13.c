#include <stdio.h>

int main (int argc, char *argv[]) {
    // has to be "" instead of ''
    // r to read
    // a to append (not overwrite the contents)
    FILE *theFile = fopen("lesson13File.txt", "w");
    fprintf(theFile, "This is testing the file by using C. I want to have a cake.\n");
    fclose(theFile);

    //cannot resuse the same name of "theFile"
    FILE *theFile02 = fopen("lesson13File.txt", "r");
    //buffer acts as container for 1 line at the time
    char buffer[255];
    // 255 to match
    fgets(buffer,255,theFile02);
    printf("%s", buffer);
    fclose(theFile02);
    //put in while to read all the lines
    //while(fgets(buffer,255,theFile02) != NULL){}
    /*
    if(remove("lesson13File.txt") ==0){
        printf("The file was deleted.\n");
    }
    else{
        printf("No file was deleted.\n");
    }
    */
    

    return 0;
}