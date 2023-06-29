#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>


//so sanh 2 chuoi
//char arr1[] ="ABC"; char arr[2] = "ABD"; 

typedef enum
{
    SMALLER ,
    BIGGER ,
    EQUAL ,
}Compare;


Compare isEqual(const char arr1[], const char arr2[])
{
    uint8_t i=0;

    while (arr1[i] == arr2[i])
    {
        if(arr1[i] == '\0') 
        {
            printf("EQUAL");
            return 0;
        }
        i++;
    }
    if (arr1[i] > arr2[i])
    {
        printf("BIGGER");
    }
    else
    {
        printf("SMALLER");
    }
}

int main(int argc, char const *argv[])
{
    char arr1[] = "ABC";
    char arr2[] ="ABD";
    isEqual(arr1, arr2);
     return 0;
}
