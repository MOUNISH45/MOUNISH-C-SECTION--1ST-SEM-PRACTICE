#include<stdio.h>
int main()
{ 
int a,b,c,d=100,sp,cp,pt;
scanf("%d%d%d",&a,&b,&c);
printf("COPIES=%d\n",a);
printf("SP=%d\n",b);
printf("CP=%d\n",c);
printf("RENT=%d\n",d);
sp=a*b;d=100;
cp=a*c;
pt=sp-cp-d;

printf("TOTAL SP=%d\n",sp);
printf("TOTAL CP=%d\n",cp);
printf("TOTAL PT=%d",pt);
return 0;
}
