#include <stdio.h>
float areaOfCircle(float r){
return  3.14*r*r;

}

int main(){
    float area = areaOfCircle(5);
    printf(" %f\n",area);

    return 0;

}