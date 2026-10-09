//ELSE IF LADDER
#include<stdio.h>
int main()
{
int a;
scanf("%d",&a);
if(a<=100 && a>=80)
{
printf("GRADE A ");
}else if(a<80 && a>=50)
{
printf("GRADE B");
}else 
{
printf("FAIL ");
}
}
