//arrays 20 blocks -> 20 bytes- 20 adrs
//Dynamic memory allocation
       //malloc()- 1 long block-> 20 bytes 1 adres                       
       //calloc()- 5 blocks -> 20 bytes- 1 adrs
       //deallocate- free()
       //realloc()-
#include<stdio.h>
#include <stdlib.h>
int main() {
int n; scanf("%d", &n);//5
//int arr[n];
//int *ptr=(int*)malloc(n* sizeof(int));
int *ptr=(int*) calloc(n, sizeof(int));
for(int i=0;i<n;i++){
    printf("%d", ptr[i]);
}
n=8;
ptr=realloc(ptr, n*sizeof(int));
free(ptr);
}
//malloc memory allocation
//calloc- Contiguous allocation
