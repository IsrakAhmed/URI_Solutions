#include<stdio.h>

    int main(){

        int X,Y;
        float Total;

        scanf("%d",&X);

        switch(X)
        {
        case 1:
            scanf("%d",&Y);
            Total=Y*4.00;
            printf("Total: R$ %.2f\n",Total);
            break;

        case 2:
            scanf("%d",&Y);
            Total=Y*4.50;
            printf("Total: R$ %.2f\n",Total);
            break;

        case 3:
            scanf("%d",&Y);
            Total=Y*5.00;
            printf("Total: R$ %.2f\n",Total);
            break;

        case 4:
            scanf("%d",&Y);
            Total=Y*2.00;
            printf("Total: R$ %.2f\n",Total);
            break;

        case 5:
            scanf("%d",&Y);
            Total=Y*1.50;
            printf("Total: R$ %.2f\n",Total);
            break;
        }//end of switch

    }//end of main
