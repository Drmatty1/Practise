#include <stdio.h>

int main() {

  int i,j,k,A[3][3],B[3][3],C[3][3];
   for (i=0;i<3;i++)
      for(j=0;j<3;j++)
         C[i][j]=0;

   printf("Enter 9 no for A[] \n");
   for (i=0;i<3;i++)
      for(j=0;j<3;j++)
         scanf("%d",&A[i][j]);
   printf("Enter 9 no for B[] \n");
   for (i=0;i<3;i++)
      for(j=0;j<3;j++)
         scanf("%d",&B[i][j]);

   for(i=0;i<3;i++)
     for(k=0;k<3;k++)
       for(j=0;j<3;j++)
         C[i][k]=C[i][k]+A[i][j]*B[j][k];
     printf("\n Product of Matrices is \n");
   for (i=0;i<3;i++){
      for(j=0;j<3;j++)
         printf(" %d ",C[i][j]);
      printf("\n");
   }

    return 0;
}
