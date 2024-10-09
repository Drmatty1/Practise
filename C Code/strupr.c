#include<stdio.h>
void main(){
    int i;
    char s[32];
    printf("Enter a string : ");
    fgets(s,sizeof(s),stdin);

    for(i=0;s[i]!='\n';i++){
        if(s[i]>='a'&&s[i]<='z')
            s[i]=s[i]-32;
    }

    puts(s);

}
