//USING ARRAY ADDING THE NO OF INPUT GIVEN BY THE USER AND FINDING THE AVG OF IT 
#include<stdio.h>
int main() {
int n;
scanf("%d",&n);//5 arr[5] 4 arr[4]
//n size - ARRAY DECLARE  
int arr[n];int sum=0;int avg=0;//arr[5]={1,2,3,4,5}//USER INPUT 
 for(int i=0;i<n;i++){
scanf("%d",&arr[i]);//01234
sum=sum+arr[i];
avg=sum/n;
}
printf("AVG=%d",avg);
}
   
