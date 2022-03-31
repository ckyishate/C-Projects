#include<stdio.h>
int sum(int a, int b);

int main(){
    int a, b;
    

    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d", &b);

    result = sum(a, b);
    printf("%d\n", result);
    return 0;
}
int sum(int a, int b){

    int result;
    result = a+b;

    return result;
}