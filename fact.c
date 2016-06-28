#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j=1;
clrscr();
printf("enter the number\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
j=j*i;
}
printf("the factorial of the given number %d=%d",n,j);
getch();
}
