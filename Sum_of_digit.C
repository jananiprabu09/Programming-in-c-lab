#include<stdio.h>
#include<conio.h>
void main()
{
int n,t=0,d;
clrscr();
printf("Enter the number :");
scanf("%d",&n);
while(n!=0)
{
d=n%10;
t=t+d;
n=n/10;
}
printf("sum of the given number :%d",t);
getch();
}

































