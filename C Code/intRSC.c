#include <stdio.h>
int main(){
    int rev,count,sum,x;
    printf("Enter a No. ");
    scanf("%d",&x);
    rev=Rev(x),count=Count(x),sum=Sum(x);
    printf("SUM IS  %d\n REV IS %d\n COUNT IS %d\n",sum,rev,count);
    return 0;
}
 int Rev( int p){
    int temp=0,i;
    for(i=0;p!=0;i+=1){
         temp = temp*10 + (p%10);
         p=p/10;
    }
    return (temp);
}
int Count(int t){
    int i;
    for(i=0;t!=0;i++){t=t/10;}
    return i;
}
int Sum(int z){
    int i,temp=0;
    for(i=0;z!=0;i+=1){
        temp=temp+(z%10);
        z=z/10;
    }
    return temp;
}
