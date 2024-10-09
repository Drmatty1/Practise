#include<stdio.h>
int main(){
    int i,j,k=1;
    for(i=1;i<=5;i++){
       for(j=1;j<=10;j+=1){

         if(j>=6-i&&j<=i+4&&k)  // or (j>=6-i&&j<=i+4&&(i+j)%2==0)
          printf("*"),k=0;
         else
          printf(" "),k=1;
       }
       printf("\n");
    }
}
