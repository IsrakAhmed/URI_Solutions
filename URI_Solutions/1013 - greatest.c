#include <stdio.h>

int main() {

            int a,b,s,MajorAB;

            scanf("%d%d%d",&a,&b,&s);

            MajorAB=((a+b+abs(a-b))/2);

            if(s>MajorAB){
                printf("%d eh o maior\n",s);
            }

            else {
                printf("%d eh o maior\n",MajorAB);
            }

    return 0;
}
