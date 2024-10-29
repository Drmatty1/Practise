#include <stdio.h>
void p(int * ,int ,int);
int BS(int a[],int f,int l,int k){
    int m=(f+l)/2;
    p(a,f,l);
   if(!(k<=a[l]&&k>=a[f]))
      return -1;
   if(k==a[m])
     return m;
     
    if(k>a[m])
      return (BS(a,m+1,l,k));
      
    if(k<a[m])
    return (BS(a,f,m-1,k));
    
}
void p(int a[],int f,int l){
    for(int i=f;i<=l;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
int main() {
    int a[]={9,10,19,21,25,27,31,42,47,53,61,77,88,107},i,n;
    scanf("%d",&n);
    i=BS(a,0,sizeof(a)/4-1,n);
    printf("%d",i);
}
