#include <stdio.h>

int main() {

    int N,i,amount,coelhos=0,sapos=0,ratos=0,p=37;

    char animal;

    float fc,fr,fs,c,r,s;

    scanf("%d",&N);

    for(i=0; i<N; i++){

            scanf("%d %c",&amount,&animal);

            if(animal=='C' || animal=='c'){
                coelhos+=amount;
            }

            else if(animal=='R' || animal=='r'){
                ratos+=amount;
            }

            else if(animal=='S' || animal=='s'){
                sapos+=amount;
            }
    }

    c=coelhos;
    r=ratos;
    s=sapos;
    fc=(c/((c+r+s)/100));
    fr=(r/((c+r+s)/100));
    fs=(s/((c+r+s)/100));


    printf("Total: %d cobaias\n",(coelhos+ratos+sapos));

    printf("Total de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\n",coelhos,ratos,sapos);

    printf("Percentual de coelhos: %.2f %c\nPercentual de ratos: %.2f %c\nPercentual de sapos: %.2f %c\n",fc,p,fr,p,fs,p);

    return 0;
}
