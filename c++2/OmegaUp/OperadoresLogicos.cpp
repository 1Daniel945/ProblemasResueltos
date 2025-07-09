#include<stdio.h>

int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    a>10&&b>10?printf("A y B son mayores a 10\n"):a;
    if((a>15)&&(b<15)){
        printf("A es mayor a 15\n");
    }
    else if((a<15)&&(b>15)){
        printf("B es mayor a 15\n");
    }
    a==b?printf("A y B son iguales\n"):a;
    a!=b?printf("A y B son diferentes\n"):a;
    return 0;
}