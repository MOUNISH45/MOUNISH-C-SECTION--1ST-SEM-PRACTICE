#include<stdio.h>
int main(){
int a;
scanf("%d",&a);
if(a>0 && a<5)
{
printf("Ticket price: %d",0);
}
else if(a>=5 && a<=12)
{
printf("Ticket price: %d",100);
}else if(a>=13 && a<=19)
{
printf("Ticket price: %d",150);
}
else if(a>=20 && a<=50)
{
printf("Ticket price: %d",200);
}
else
{
printf("Ticket price: %d",120);
}
}
