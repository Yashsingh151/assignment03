#include <stdio.h>
int main(){
    int a;
    printf("enter any integer");
    scanf("%d",&a);
    if (a>0)
    printf("number is positive");
    else if (a<0)
    printf("number is negative");
    else if (a==0)
    printf("number is zero");
    return 0;
    
}