#include<stdio.h>
int main(){
    int a,b;
    printf("provide number a\n");
    scanf("%d",&a);
    printf("provide number b\n");
    scanf("%d",&b);
    if(a>b){
        printf("%d",a);
    }
    else{
        printf("%d",b);
    }
    return 0;
}
