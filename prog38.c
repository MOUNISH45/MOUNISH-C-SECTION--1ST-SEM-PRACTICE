#include<stdio.h>
int main()
{ 
int a;
scanf("%d",&a);
if(a%4==0)
{
printf("LEAP YEAR");
}
else if(a<=9000)
{
printf("NOT A LEAP YEAR");
}
else 
{
printf("Years Only Accepted ");
}
return 0;
}
