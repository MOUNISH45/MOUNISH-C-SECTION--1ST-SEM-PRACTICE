// TO WRITE A SINGLE CHARACTER  INTO A FILE USING FPUTC()
#include<stdio.h>
int main(){
FILE*fp;
fp = fopen("data.txt","w");
if(fp == NULL)
{
printf("File opening failed");
return 1;
}
fputc('A',fp);
fclose(fp);
printf("character writtrn succesfully");
return 0;
}  
