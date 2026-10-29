#include<stdio.h>
#include<conio.h>
void main()
{
char username[20];
int password;
clrscr();
printf("Enter your username and password");
scanf("%s%d",username,&password);
if((strcmp(username,"janani")==0)&&(password==12345))
{
printf)"\nWelcome to c");
}
else
{
printf("\nInvalid username and password");
}
getch();
}
