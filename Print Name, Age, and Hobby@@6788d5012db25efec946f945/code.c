#include <stdio.h>
int main() {
    char x[100],z[100];
    int y;
    scanf("%s %d %s" ,&x,&y,&z);
    printf("Name: %s\n",x);
    printf("Age: %d\n",y);
    printf("Hobby: %s\n",z);
    return 0;
}