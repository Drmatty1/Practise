#include<stdio.h>
int main (){
    int l,i,j,z,k=0,n;

    while(1){

        printf("Enter 0 to end. \n Enter a no. ");
        scanf("%d",&n);
        if(n==0){break;}
        z=(n+1)/2;
        k=0;

      for(i=1;i<=n;i++){
            if(n%2==0){
                if(i<=z){k++;}
                if(i>z+1){k--;}
            }
            else
            i<=z?k++:k--;
        for(j=1;j<=n;j++){
            if(j>=k&&j<=(n+1)-k)
                printf("*");
            else
                printf(" ");
        }
      printf("\n");
      }
    }
}
