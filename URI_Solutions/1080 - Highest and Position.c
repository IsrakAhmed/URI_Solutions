#include <stdio.h>

int main() {

    int N,i=0,compare=0,highest,position;

    while(i!=100){
        scanf("%d",&N);
        i++;

        if(N>compare){
            highest=compare=N;
            position=i;
        }
    }

    printf("%d\n%d\n",highest,position);

    return 0;
}
