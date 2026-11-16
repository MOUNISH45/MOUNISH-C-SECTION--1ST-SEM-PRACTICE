#include<stdio.h>
int main()
{     // ROW COLUMN
    int row,col;
    scanf("%d%d",&row,&col);//3 4
    int arr[row][col];//arr[3][4]
  //READ ARRAY VALUES
  for(int i=0;i<row;i++){
      for(int j=0;j<col;j++){
          scanf("%d",&arr[i][j]);
      }
  }
  // TRAVERSAL OF 2-D ARRAY 
  printf("\nTRAVERSAL\n");
   for(int i=0;i<row;i++){
       for(int j=0;j<col;j++){
           printf("%d ",arr[i][j]);
       }printf("\n");           
   }//TRANSPOSE OF 2-D ARRAY 
   printf("\nTRANSPOSE\n");
       for(int i=0;i<row;i++){
           for(int j=0;j<col;j++){
               printf("%d ",arr[j][i]);
           }printf("\n"); 
       }
} //TRAVERSAL OF 2-D ARRAY --> arr[i][j]                    
  //TRANSPOSE OF 2-D ARRAY --> arr[j][i]        
    
