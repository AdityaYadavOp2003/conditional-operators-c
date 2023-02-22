# include <stdio.h>
int main()
{
    int year;
    printf("Enter a Year : ");
    scanf("%d",&year);
    (year%400==0)?(printf("Its a Leap Year")):(year%100==0)?(printf("Its Not a Leap Year")):(year%4==0)?(printf("Its a Leap Year")):(printf("not a leap year"));
    return 0;
}