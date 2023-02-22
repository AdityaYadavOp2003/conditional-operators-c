# include <stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    (a>b)?(printf("first number %d is Greater",a)):printf("Second Number %d is Greater",b);
}