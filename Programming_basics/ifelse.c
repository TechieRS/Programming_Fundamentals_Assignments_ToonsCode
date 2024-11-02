#include <stdio.h>
int main(){
    int n = -8;
    if (n > 0)
        printf("Positive");
    else if (n == 0)
        printf("Zero");
    else
        printf("Negative");
    return 0;
}