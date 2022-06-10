#include <stdio.h>

int main() {

    float consumedHotDogs,totalParticipants,averageHotDogsConsumed;

    scanf("%d%d",&consumedHotDogs,&totalParticipants);

    averageHotDogsConsumed = consumedHotDogs / totalParticipants;

    printf("%.2f\n",averageHotDogsConsumed);

    return 0;
}
