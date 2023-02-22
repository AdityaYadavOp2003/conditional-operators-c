# include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 3 Numbers : ");
    scanf("%d%d%d",&a,&b,&c);
    (a>b&&a>c)?(printf("A is Greatest")):(b>a&&b>c)?(printf("B is Greatest")):(printf("C is Greatest"));
    return 0;
}