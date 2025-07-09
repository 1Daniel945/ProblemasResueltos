#include <stdio.h>
using namespace std; 

int main(){
    int num;
    while (scanf("%d",&num), num!=0)
    {
        if(num ==1 || num==64 || num == 729 || num == 4096 || num == 15625 || num == 46656
        || num ==117649|| num ==262144|| num ==531441||num ==1000000|| num ==1771561|| num ==2985984|| num ==4826809|| num ==7529536|| 
        num ==11390625|| num ==16777216|| num ==24137569||num == 34012224||
        num ==47045881|| num ==64000000 || num ==85766121){
            printf("Special\n");
        }
        else{
            printf("Ordinary\n");
        }
    }
    return 0;
}