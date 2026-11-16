//2D -> ARRAYS -> arr[2][3] ->ROW - COLUMN
//3rd STYLE WITH FOR LOOP 
#include<stdio.h>
int main() {
   int arr[2][3]={11,12};
                //00 01 --> INDEX
for(int i=0;i<2;i++){
  for(int j=0;j<3;j++){
      printf("%d ",arr[i][j]);
  }printf("\n");     
}return 0;
}

