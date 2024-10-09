#include <stdio.h>
#define pie  3.1415
float Area(float *);
int main(){

     float A,r;
     printf("enter a radius : ");
     scanf("%f",&r);
     A = Area(&r);
     printf("Area if the circle is %f",A);
 }
float Area(float *p){
    float temp;
    temp = pie*(*p)*(*p);
    return temp;
}
