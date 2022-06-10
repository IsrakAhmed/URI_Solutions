#include <stdio.h>

int main() {

    int testCase,theNum,i,count;

    scanf("%d",&testCase);

    while(testCase != 0){

        count = 1;

        scanf("%d",&theNum);

        for (i = 2; i <= sqrt(theNum); i++) {

            if (theNum % i == 0) {
                count = 0;
                break;
            }
        }

        if (theNum <= 1){
            count = 0;
        }
        if (count == 1) {
            printf("Prime\n");
        }
        else {
            printf("Not Prime\n");
        }

        testCase--;
    }

    return 0;
}
