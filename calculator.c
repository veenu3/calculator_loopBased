#include<stdio.h>
int main()
{
int a,c;
int b;
int n;
char ch;
do{
printf("Enter the value first number:");
scanf("%d",&a);
printf("Enter the value second number:");
scanf("%d",&b);
printf(" Press the value :1 for '+'\n");
printf(" Press the value :2 for '-'\n");
printf(" Press the value :3 for '*'\n");
printf(" Press the value :4 for '%'\n");
printf(" Press the value :5 for '>>'\n");
printf(" Press the value :6 for '<<'\n");
printf("Enter your key:");
scanf("%d",&n);
//switch statement
switch(n)
{
case 1:
    c=a+b;
    printf("Calculation:%d\n",c);
    break;
case 2:
    c=a+b;
    printf("Calculation:%d\n",c);
    break;
case 3:
    c=a*b;
    printf("Calculation:%d\n",c);
    break;
case 4:
    c=a%b;
    printf("Calculation:%d\n",c);
    break;
case 5:
    c=a>>b;
    printf("Calculation:%d\n",c);
    break;
case 6:
    c=a<<b;
    printf("Calculation:%d\n",c);
    break;
}
printf("Do you want to continue \n");
printf("press :y for 'yes'\n");
printf("press :n for 'no'\n");
scanf(" %c",&ch);
}while (ch=='y');
 printf("THNAK YOU!");
return 0;
}
