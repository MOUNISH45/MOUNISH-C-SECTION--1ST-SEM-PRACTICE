//2D -> ARRAYS -> arr[2][3] ->ROW - COLUMN
//2nd STYLE WITH FOR LOOP 
#include<stdio.h>
int main() {
   int arr[2][3]={100,200,300,400,500,600};
                //00 01 02 10 11 12--> INDEX
for(int i=0;i<2;i++){
  for(int j=0;j<3;j++){
      printf("%d ",arr[i][j]);
  }printf("\n");     
}return 0;
}
