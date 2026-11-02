//USING ARRAY GET NO OF INPUT GIVEN BY THE USER AND FINDING THE GIVEN ELEMENT  
#include<stdio.h>
int main(){
int n,found=0;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
}
int key;scanf("%d",&key);
for(int i=0;i<n;i++){
if(a[i]==key){
found=1;
printf("element found index =%d",i);
break;
}
}if(found== 0){
printf("element not found ");
}
}
 
