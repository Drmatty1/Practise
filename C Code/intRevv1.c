#include<stdio.h>
#include<math.h>
int digitcount(int);
int main(){

    int r=0,d,i,x;
    printf("Enter a no : ");
    scanf("%d",&x);
    d=digitcount(x);
    printf("digitcount is %d\n",d);
    for(i=d-1;i>=0;i--){
        r=r+(x%10)*(pow(10,i));
        x=x/10;
    }
    printf("Reverse is %d",r);
                        //withour using digitcount put x!=0 to End loop;
}
int digitcount(int ct){

    int i;
    for(i=0;ct!=0;i++)
        ct=ct/10;
    return i;
}
