//DYNAMIC MEMORY ALLOCATION
  //USING malloc()
  #include<stdio.h>
  #include<stdlib.h>
  int main(){
      int n;scanf("%d",&n);//5
      //int arr[n]
      int *ptr=(int*)malloc(n*sizeof(int));
      for(int i=0;i<n;i++){
           printf("%d",ptr[i]);
           }
   }        
