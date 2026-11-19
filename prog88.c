//POINTERS
#include<stdio.h>
int main(){
int a=5;//2 purpose -> store a value it has one address
printf("%d",a);//value=5
printf("\n%p",&a);//addrs=1000
//pointer variable - 3 purpose
//it has one address, it can store one value(address), access the value
int *ptr=&a;//value 1000 address=2000
printf("\n%p",ptr);//value address of a
printf("\n%p",&ptr); //addrs=2000
//DE-REFERENCING
printf("\n%d",*ptr); //addrss -> vaLUE
//a ptr is a variable that can store only address not a value
//POINTER HAS 3 PURPOSE
//1. it can store a value that is address of another variable
//2. it has one address
//3. using its value(address) it can access the valuye stored in address and that is caled as dereferencing.

}
