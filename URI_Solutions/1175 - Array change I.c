#include <stdio.h>

int main() {

    int N[20],i,j;

    for(i=0; i<20; i++){
        scanf("%d",&N[i]);
    }

    i=19;

    for(j=0; j<20; j++){
        printf("N[%d] = %d\n",j,N[i]);
        i--;
    }

    return 0;
}
