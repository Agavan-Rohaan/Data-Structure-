// 49. WAP to allocate and de-allocate memory for int, char and float variable at runtime
// status of code : complete
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int num;
    char ch;
    float floatNumber;

    int *iptr = (int *)malloc(sizeof(num));
    char *cptr = (char *)malloc(sizeof(ch));
    float *fptr = (float *)malloc(sizeof(floatNumber));

    iptr = &num;
    cptr = &ch ;
    fptr = &floatNumber ;

    num = 9;
    ch = 'R';
    floatNumber = 10.9;

    printf("num = %d\n", *iptr);
    printf("ch = %c\n", *cptr);
    printf("floatNumber = %f\n", *fptr);

    free(iptr);
    free(cptr);
    free(fptr);
}