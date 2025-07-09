#include <stdio.h>

int main(){
    int m,l,r,x=0;
    scanf("%d%d%d",&m,&l,&r);
    while(true){
        if(x+m>=45){
            printf("Maeva\n");
            break;
        }
        else x+=m;
        if(x+l>=45){
            printf("Lorena\n");
            break;
        }
        else x+=l;
        if(x+r>=45){
            printf("Ramona\n");
            break;
        }
        else x+=r;
    }
    return 0;
}