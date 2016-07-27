#include<stdio.h>
#include<string.h>
#include<stdlib.h>


void btos(int *src, int len)
{

       int tem;

       for(int i = 0; i<len; i++){
              
            for(int j = 0; j < len-i-1; j++){
                    if(src[j] < src[j+1]){
                          tem = src[j];
                          src[j] = src[j+1];
                          src[j+1] = tem;
                    }
            } 
       }
}

void sort(int *src, int len){
       int tem;
       for(int i = 0; i<len; i++){
          
           for(int j = 0; j<len-i-1; j++){
                if(src[j] > src[j+1]){
                     tem = src[j];
                     src[j] = src[j+1];
                     src[j+1] = tem;
                }
           }
       }
}


int main(){

int a[5],e=0,i=0;
char buffer[1024];


	FILE*fp=fopen("text.txt","r");
        FILE*fptr=fopen("op.txt","w");

               memset(a,0,sizeof(a));

		if(fptr){
		while(fgets(buffer, 1024, fp) != NULL){
		e = atoi(buffer);
		a[i]=e;
		i++;
		printf("%d\n",e);
		}
		
		





      //int a[5] = {33,56,22,10,12};
      printf("How many numbers in the case? = %d\n" , sizeof(a)/4);
      printf("key (1) or (2)\n");
      int c;
      scanf("%d",&c);

            if(c==1){
               sort(a,5);
               for(int i = 0; i<5; i++)
               printf("%d\n",a[i]);
            }
        
            if(c==2){
               btos(a,5);
               for(int i = 0; i<5; i++)
               printf("%d\n",a[i]);
            }
     // return 0;

		for(int i = 0; i<5; i++){
			fprintf(fptr, "%d\n",a[i]);

		}
		fclose(fptr);
		fclose(fp);

}

}
