#include <stdio.h>

int main() {

    int a,b,quotient,remain,temp,another_temp;

    scanf("%d%d",&a,&b);

    if(a<0){
        temp=b;

        if(b<0){
            temp=b*-1;
        }

        for(remain=0; remain<temp; remain++){
            another_temp=a-remain;

            if(another_temp%b==0){break;}
        }
        quotient=another_temp/b;
    }

    else{
        quotient=a/b;

        remain=a%b;
    }

    printf("%d %d\n",quotient,remain);

    return 0;
}
