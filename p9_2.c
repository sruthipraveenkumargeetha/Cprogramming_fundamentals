/*
* C Program to print fibonacci series using recursion
*/
#include<stdio.h>
int fib(int n)
{
if(n<2)
return n;
return fib(n-1)+fib(n-2);

}
int main()
{
int n;
scanf("%d",&n);
for(int i=0;i<n;i++)
printf("%d	",fib(i));
printf("\n");
return 0;
}
