#include <stdio.h>
int main(){
    char x[100],z[100];
    int y;
    scanf("%c %d %c",&x,&y,&z);
    printf("Name: %c",x);
    printf("Age: %d",y);
    printf("Hobby: %c",z);
    return 0;
}