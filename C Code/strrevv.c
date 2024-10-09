#include <stdio.h>
#include <string.h>

void strrevv(char *);
int main (){

     char s[128]="helloEarthB";
     printf("enter a string : ");
     fgets(s,sizeof(s),stdin);
     strrevv(s);
     puts(s);

}

void strrevv(char *p){
   int i,x,y;
   char t;
   x=strlen(p);
   y=x*(0.5);
   for(i=0;i<=y-1;i++){

       t=*(p+i);
       *(p+i)=*(p+x-1-i);
       *(p+x-1-i)=t;
   }
}
