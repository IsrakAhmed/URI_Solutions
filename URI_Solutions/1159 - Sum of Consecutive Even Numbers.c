#include <stdio.h>

int main() {

    int X,i,sum,cycle;

    while(1){
        scanf("%d",&X);

        if(X==0){
            break;
        }

        sum=cycle=0;

        for(i=X; cycle<5; i++){
            if(i%2==0){
                sum+=i;
                cycle++;
            }
        }

        printf("%d\n",sum);
    }

    return 0;
}
