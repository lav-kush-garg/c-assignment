#include<stdio.h>
int main() {
    int num1, num2;
    printf("Enter both numbers\n");
    scanf("%d %d", &num1, &num2);
    if (num1 == num2)
        printf("Equal\n");
    else
        printf("Not Equal\n");
    return 0;
}