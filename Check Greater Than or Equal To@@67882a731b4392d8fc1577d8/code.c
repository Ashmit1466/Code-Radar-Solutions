#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int num1, num2;
    scanf("%d", &num1);
    scanf("%d", &num2);
    if (num1 < num2){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}
