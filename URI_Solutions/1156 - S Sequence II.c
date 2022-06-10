#include <stdio.h>

int main() {

    int i;
    float S=1,j=2.0;

    for(i=3; i<=39; i++){
        if((i%2)!=0){
            S+=i/j;
            j+=j;
        }
    }

    printf("%.2f\n",S);

    return 0;
}
