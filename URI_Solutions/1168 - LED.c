#include <stdio.h>

int main() {

    int testCase,i,j,takingFirstDigit;

    long long totalLeds=0;

    char numberToSet[100];

    scanf("%d",&testCase);

    for(i = 0; i < testCase; i++){

        scanf("%s",&numberToSet);

        for(j = 0; j < 100; j++){

            takingFirstDigit = numberToSet[j];

            if(takingFirstDigit == 48) totalLeds += 6;

            else if(takingFirstDigit == 49) totalLeds += 2;

            else if(takingFirstDigit == 50) totalLeds += 5;

            else if(takingFirstDigit == 51) totalLeds += 5;

            else if(takingFirstDigit == 52) totalLeds += 4;

            else if(takingFirstDigit == 53) totalLeds += 5;

            else if(takingFirstDigit == 54) totalLeds += 6;

            else if(takingFirstDigit == 55) totalLeds += 3;

            else if(takingFirstDigit == 56) totalLeds += 7;

            else if(takingFirstDigit == 57) totalLeds += 6;

            else break;

        }

        printf("%lld leds\n",totalLeds);


        totalLeds = 0;
    }

    return 0;
}
