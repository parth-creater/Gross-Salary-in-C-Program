#include<stdio.h>
int main()
{
float BS,HRA,TA,DA,PF,GS;
clrscr();
printf("Enter Basic Salary of Employee: ");
scanf("%f", &BS);
HRA=(BS*50)/100;
TA=(BS*40)/100;
DA=(BS*30)/100;
PF=(BS*5)/100;
GS=(BS+HRA+TA+DA)-PF;
printf("The Gross Salary of Employee is: %f", GS);
getch();

}