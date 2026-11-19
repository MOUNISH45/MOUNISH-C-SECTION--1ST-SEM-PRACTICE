//STRUCTURE IN C PROGRAM-> UNION 
#include<stdio.h>
union student{
 char name[20];
 int age;
 float mark;
 };//>=28(the size ofthis group)
 int main(){
    union student s1;
  s1.age=20;
  s1.mark=87.34;
  printf("%f\n",s1.mark);
  printf("Size=%zu",sizeof(s1));
    }
