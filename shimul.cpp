#include<stdio.h>
#include<string.h>
int main(){

   char str[25][25],temp[25];

    printf("Enter Strings one by one: ");
    for(int i=0 ;i<10 ;i++)
    gets(str[i]);

    for(int i=0;i<10;i++)
      for(int j=i+1;j<10;j++){
         if(strcmp(str[i],str[j])>0){
            strcpy(temp,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],temp);
         }
      }
    printf("Order of Sorted Strings:");
    for(int i=0;i<10;i++)
    printf("%s\n", str[i]);

   return 0;
}
