//Types of pointers
//1. Null posters
//2. Void pointers
//3. Wild pointer
//4. Double pointer
#include<stdio.h>
int main(){
int a=5;//5,1000
int *ptr=&a;//1000 ,2000
int **ptr2=&ptr;//2000 , 3000
printf("value of ptr2= %p",ptr2);//2000
printf("\nadrs opf ptr2= %p",&ptr2);//3000
printf("\nsingle de-referencing=%p",*ptr2);//1000
printf("\ndouble dewreferencing=%d", **ptr2);//5
}
