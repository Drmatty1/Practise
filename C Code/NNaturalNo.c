#include<stdio.h>
#include<math.h>
int main(){

     long int i,n,m;
     printf("enter m(power) to n terms : ");
    scanf("%li %li",&m,&n);


     for(i=1;i<=n;i++){
        if (m==1){ printf("\n %list power of %li is %lf\n",m,i,pow(i,m));}
        else if (m==2){ printf("\n %lind power of %li is %lf\n",m,i,pow(i,m));}
        else if (m==3){ printf("\n %lird power of %li is %lf\n",m,i,pow(i,m));}
        else
        printf("\n %lith power of %li is %lf\n",m,i,pow(i,m));
     }
     return 0;
}
