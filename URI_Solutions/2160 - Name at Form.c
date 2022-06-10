#include <stdio.h>
#include<string.h>

int main() {

    char L[550];
    int lengthOfL;

    gets(L);

    lengthOfL = strlen(L);

    if(lengthOfL <= 80){
        printf("YES\n");
    }
    else if(lengthOfL > 80){
        printf("NO\n");
    }

    return 0;
}
