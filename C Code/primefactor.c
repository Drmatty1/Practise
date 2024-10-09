#include "stdio.h"
int main (){
    int temp,x,i;
    printf("Enter a NO. ");
    scanf("%d",&x);
    temp=x;
    for(i=2;i<=x/2;i++){
        if(temp==1){
           break;
        }
        while(temp%i==0){
            printf("%d  ",i);
            temp=temp/i;
        }
    }
return 0;
}
