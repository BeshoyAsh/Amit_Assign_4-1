#include <stdio.h>
#include <stdlib.h>
int edit (int*);

int x;
int main()
{
    printf("Please Enter your number: ");
    scanf("%d",&x);
    printf("\nYour number before increament= %d ",x);
    edit(&x);
    printf("\nYour number after increament= %d ",x);

    return 0;
}
int edit (int*p)
{
    *p=++x;
    //printf("%d",x);
}
