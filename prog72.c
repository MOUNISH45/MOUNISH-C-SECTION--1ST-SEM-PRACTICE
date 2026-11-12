//2D -> ARRAYS -> arr[2][3] ->ROW - COLUMN
//1st STYLE WITH FOR LOOP 
#include<stdio.h>
int main() {
   int arr[2][3]={
       {10,20,30},
       {40,50,60}
   }; //00 01 02 --> INDEX
      //10 11 12 --> INDEX
for(int i=0;i<2;i++){
  for(int j=0;j<3;j++){
      printf("%d ",arr[i][j]);
  }printf("\n");     
}return 0;
}

