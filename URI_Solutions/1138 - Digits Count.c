#include <stdio.h>

int main() {

    int startingPoint,endingPoint,i,takingLastDigit,zero,one,two,three,four,five,six,seven,eight,nine;

    zero = one = two = three = four = five = six = seven = eight = nine = 0;

    scanf("%d%d",&startingPoint,&endingPoint);

    for(i = startingPoint; i <= endingPoint; i++){

        while(1){

            if(takingLastDigit == 0) break;

            takingLastDigit = i % 10;

            if(takingLastDigit == 0) zero++;

            else if(takingLastDigit == 1) one++;

            else if(takingLastDigit == 2) two++;

            else if(takingLastDigit == 3) three++;

            else if(takingLastDigit == 4) four++;

            else if(takingLastDigit == 5) five++;

            else if(takingLastDigit == 6) six++;

            else if(takingLastDigit == 7) seven++;

            else if(takingLastDigit == 8) eight++;

            else if(takingLastDigit == 9) nine++;

            i = i / 10;

        }
    }

    printf("%d %d %d %d %d %d %d %d %d %d\n",zero,one,two,three,four,five,six,seven,eight,nine);

    return 0;
}
