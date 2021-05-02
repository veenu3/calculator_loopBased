#include<stdio.h>
int add(int a,int b);
int sub(int a,int b);
int multiple(int a,int b);
int modulus(int a,int b);
int rightshift(int a,int b);
int leftshift(int a,int b);
int divide(int a,int b);
void printResult(int c);
void swap_number(int*a,int*b);
void printResult2(int c,int d);
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
printf(" Press the value :7 for '/'\n");
printf(" Press the value :8 for swap the value a and b\n");
printf("Enter your key:");
scanf("%d",&n);
//switch statement
switch(n)
{
case 1:
    c=add(a,b);
     printResult(c);
    break;
case 2:
    c=sub(a,b);
    printResult(c);
    break;
case 3:
    c=multiple(a,b);
    printResult(c);
    break;
case 4:
    c=modulus(a,b);
    printResult(c);
    break;
case 5:
    c=rightshift(a,b);
    printResult(c);
    break;
case 6:
    c=leftshift(a,b);
    printResult(c);
    break;
case 7:
    if(b==0){
        printf("can not be divided by 0\n");
        break;
    }
    else{
      c=divide(a,b);
      printResult(c);
      break;
    }
 case 8:
     swap_number(&a,&b);
     printResult2(a,b);
      break;
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
int add(int a,int b)
{
 int c;
 c=a+b;
 return c;
}
int sub(int a,int b)
{
 int c;
 c=a-b;
 return c;
}
int multiple(int a,int b)
{
 int c;
 c=a*b;
 return c;
}
int modulus(int a,int b)
{
 int c;
 c=a%b;
 return c;
}
int rightshift(int a,int b)
{
 int c;
 c=a>>b;
 return c;
}
int leftshift(int a,int b)
{
 int c;
 c=a<<b;
 return c;
}
int divide(int a,int b){
 int c;
 c=a/b;
 return c;
}
void printResult(int c){
 printf("Calculation:%d\n",c);
}
void swap_number(int*a,int*b){
    int t=*a;
    *a=*b;
    *b=t;
}
void printResult2(int c,int d){
 printf("swapped value:%d,%d\n",c,d);
}
