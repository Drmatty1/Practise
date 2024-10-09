#include<stdio.h>
int main (){

    int i,j,z,k=0,n;
    printf("Enter a no : ");
    scanf("%d",&n);
    z=(n+1)/2;

    for(i=1;i<=n;i++){
            if(n%2==0){
                if(i<=z){k++;}
                if(i>z+1){k--;}
            }
            else{
            i<=(z)?k++:k--;
            }
        for(j=1;j<=z;j++){
            if(j<=k)
              printf("*");
            else
              printf(" ");
        }
        printf("\n");
    }
}
