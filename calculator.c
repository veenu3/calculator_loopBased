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

printf(" Press the value :2 for '-'\n");
printf(" Press the value :3 for '*'\n");
printf(" Press the value :4 for '%'\n");
printf(" Press the value :5 for '>>'\n");
printf(" Press the value :6 for '<<'\n");
printf(" Press the value :7 for '/'\n");
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
case 7:
    if(b==0){
        printf("can not be divided by 0\n");
        break;
    }
    else{
      c=a/b;
    printf("Calculation:%d\n",c);
      break;
    }
default:
    printf("please select the right choice\n");
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
