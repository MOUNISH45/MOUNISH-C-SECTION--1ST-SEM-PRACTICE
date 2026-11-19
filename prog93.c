//STRUCTURE IN C PROGRAM
#include<stdio.h>
struct student{
 char name[20];
 int age;
 float mark;
 };//>=28(the size ofthis group)
 int main(){
    struct student s1={"abc",20,85.5};
  printf("%s\n",s1.name);
  printf("%d\n",s1.age);
  printf("%f\n",s1.mark);
  printf("Size=%zu",sizeof(s1));
    }
    
