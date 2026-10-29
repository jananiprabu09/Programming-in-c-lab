#include<stdio.h>
#include<conio.h>
void main()
{
int age,semester,year;
char name[10],department[20];
long int roll_no;
clrscr();
printf("Enter your name and department :");
scanf("%s%s",name,department);
printf("Enter your age,semester and year :");
scanf("%d%d%d",&age,&year,&semester);
printf("Enter your roll_no :");
scanf("%ld",&roll_no);
printf("\nStudent Name is :%s",name);
printf("\nStudent Roll_no:%ld",roll_no);
printf("\nStudent age is :%d",age);
printf("\nStudent department is :%s",department);
printf("\nStudent year is :%d",year);
printf("\nStudent semester is :%d",semester);
getch();
}

































