#include <stdio.h>
#include <string.h>
int main(){
     char str[20],temp;
     int i,j;
     printf("\nEnter a string : ");
     scanf("%s",str);
     printf("\nOriginal String     : %s",str);
     for(i=0;i<strlen(str);i=i+2)
     {
     temp = str[i];
     str[i] = str[i+1];
     str[i+1] = temp;
     }
     printf("\nAfter Swap String      : %s",str);
     return 0;
}
