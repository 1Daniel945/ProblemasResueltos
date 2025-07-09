#include <stdio.h>
using namespace std;

int main(){
    int a[3],s=0;
    scanf("%d%d%d",&a[0],&a[1],&a[2]);
    for(int i=1; i<=a[2]; ++i){
        s+=a[0]*i;
    }
    s>a[1]?printf("%d",s-a[1]):printf("0\n");
    return 0;
}