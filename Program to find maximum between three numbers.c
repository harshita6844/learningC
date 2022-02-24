#include <stdio.h>

int main()
{
    int a,b,c;                                        /*declaring variables*/
    printf("Enter three numbers to compare \n");            
    scanf("%d%d%d",&a,&b,&c);                           
    if((a>b)&&(a>c))                                  /*comparing the value of variable a with variable b and variable c*/
    {
        printf("%d is the largest",a);
    }
    else if((b>a)&&(b>c))                            /*comparing the value of variable b with variable a and variable c*/
    {
        printf("%d is the largest",b);
    }
    else
    {
        printf("%d is the largest",c);
    }
}
