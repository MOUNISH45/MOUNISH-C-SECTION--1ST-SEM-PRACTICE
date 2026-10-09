// THE GREATEST OF THREE NUMBERS
#include<stdio.h>
int main()
{
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if (a>b && a>c)
{
printf("A Is Greatest");
}
else if (b>c)
{
printf("B Is Greatest");
}
else
{ 
printf("C Is Greatest");
}
return 0;
}

