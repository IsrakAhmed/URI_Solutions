#include <stdio.h>

int main() {

    int T,i,j;

    scanf("%d",&T);

    int cases[T],temp;

    for(i=0; i<T; i++){
        scanf("%d",&cases[i]);
    }

    for(i=0; i<T; i++){

        temp=cases[i];

        /* Fibonacci series S */
        long long int t1 = 0, t2 = 1, nextTerm;
        long long int fib[61];

        for (j=0; j<61; j++) {

            fib[j]=t1;
            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;
        }
        /* Fibonacci series E */

        printf("Fib(%d) = %lld\n",temp,fib[temp]);
    }
    return 0;
}
