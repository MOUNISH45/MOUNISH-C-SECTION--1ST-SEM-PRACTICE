#include<stdio.h>
int main()
{ 
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
switch(c)
{
case 1:printf("ADDITION =%d",a+b);
break;
case 2:printf("MULTIPLICATION=%d",a*b);
break;
case 3:printf("SUBRACTION=%d",a-b);
break;
case 4:printf("DIVISION=%d",a/b);
break;
case 5:printf("REMAINDER=%d",a%b);
break;
default:printf("GIVE ONLY FROM 1-5");
}
}
