#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);

    if (char >= 'A' && char <= 'Z'){
        printf("Uppercase\n");
    
    }
    else if (char>= 'a' && char <= 'z'){
        printf("Lowercase\n");
    }
    return 0;
}