#include<stdio.h>

    int main(){

        int DiaX,DiaY,W,X2,Y2,Z2,X1,Y1,Z1,X,Y,Z;


        scanf("%s %d",&DiaX);
        scanf("%d:%d:%d",&X2,&Y2,&Z2);
        scanf("%s %d",&DiaY);
        scanf("%d:%d:%d",&X1,&Y1,&Z1);

        if(X2<X1){

            if(Y2>Y1){
                if(Z2>Z1){
                    X=X1-X2-1;
                    Y=60-(Y2-Y1);
                    Z=
                }
                else if(Z2==Z1){
                    X=X1-X2-1;
                    Y=60-(Y2-Y1);
                    Z=
                }
                else if(Z2<Z1){
                    X=X1-X2-1;
                    Y=60-(Y2-Y1);
                    Z=
                }
            }

            else if(Y2<Y1){
                    if(Z2>Z1){
                        X=X1-X2;
                        Y=Y1-Y2;
                        Z=
                    }
                    else if(Z2==Z1){
                        X=X1-X2;
                        Y=Y1-Y2;
                        Z=
                    }
                    else if(Z2<Z1){
                        X=X1-X2;
                        Y=Y1-Y2;
                        Z=
                    }
                }

            else if(Y2==Y1){
                    if(Z2>Z1){
                        X=X1-X2;
                        Y=0
                        Z=
                    }
                    else if(Z2==Z1){
                        X=X1-X2;
                        Y=0
                        Z=
                    }
                    else if(Z2<Z1){
                        X=X1-X2;
                        Y=0
                        Z=
                    }
                }
            }//1

        else if(X2==X1){
                if(Y2==Y1){
                        X=24;
                    Y=0;
                }

                else if(Y2>Y1){
                        X=23;
                    Y=60-(Y2-Y1);
                }

                else if(Y2<Y1){
                        X=0;
                    Y=Y1-Y2;
                }
        }//2

       else if(X2>X1){

            if(Y2<Y1){
               X=24-(X2-X1);
               Y=Y1-Y2;
            }

            else if(Y2>Y1){
            X=24-(X2-X1)-1;
            Y=60-(Y2-Y1);
            }

            else if(Y2==Y1){
                X=24-(X2-X1);
                Y=0;
            }
    }//3


 return 0;
    }
