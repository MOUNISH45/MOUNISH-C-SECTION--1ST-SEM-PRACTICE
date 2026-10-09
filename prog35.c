// THE SMALLEST OF THREE NUMBERS
#include<stdio.h>
int main()
{ 
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if (a<b && a<c)
{
printf("A Is Smallest");
}
else if (b<c)
{
printf("B Is Smallest");
}
else
{ 
printf("C Is Smallest");
}
return 0;
}

