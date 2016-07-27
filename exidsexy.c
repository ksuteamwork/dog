#include<stdio.h>
#include<string.h>

int main()
{
     FILE *fPtr;
     char a[1024];
     fPtr = fopen("text.txt","r");
     
     if(NULL == fPtr){
             printf("\n\n\n\n\nfuck you\n\n\n\n\n\n");
             return 1;
     }
     
     else{
             fread(a,1024,1,fPtr);
             printf("%s",a);
     }
   
            fclose(fPtr);
            return 0;


}
