#include <stdio.h>

int main() {

    int i,j=60;

    for(i=1; j>=0; j--){
        printf("I=%d J=%d\n",i,j);
        i+=3;
        j-=4;
    }

    return 0;
}
