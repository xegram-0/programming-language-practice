#include <stdio.h>
#include <string.h>
int main (int argc, char *argv[]) {
    // newline buffer issue?
    // continue = skip and continue
    // break = exit
    // height[5] same data type
    double height[] = {5.4, 6.7, 8.9, 2.3};

    // strlen returns length of string // THIS IS NOT PYTHON
    // sizeof returns size in bytes
    // double is 8 bytes with 4 values so the total would be 32
    printf("%d bytes\n", sizeof(height));
    // basically 32/8 since the size of each element is consistent
    for (int i = 0; i < (sizeof(height)/sizeof(height[0])); i++)
    {
        printf("%.1lf\n", height[i]);
    }
    
    int grade[2][3] = {{1,2,3},
                        {7,8,9}}; // 2D array

    int rows = sizeof(grade)/sizeof(grade[0]);
    int columns = sizeof(grade[0])/sizeof(grade[0][0]);
    printf("rows :>> %d\n", rows);
    printf("columns :>> %d\n", columns);

    //char names[] = {"Nhan", "Nhung", "Nhi"}; // excess elements
    // each name is like a smaller array
    char names[][10] = {"Nhan", "Nhung", "Nhi"}; // limit of each smaller arr needs to be specified
    for (int i = 0; i < (sizeof(names)/sizeof(names[0])); i++)
    {
        printf("names :>> %s\n", names[i]);
    }
    
    return 0;
}