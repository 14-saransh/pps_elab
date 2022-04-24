#include<stdio.h>
int main() {
    int num1,num2,sum,sub,mul,div,mod;
    scanf("%d%d",&num1,&num2);
    sum = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    div = num1 / num2;
    mod = num1 % num2;
    printf("%d\n%d\n%d\n%d\n%d",sum,sub,mul,div,mod);
    return 0;
}