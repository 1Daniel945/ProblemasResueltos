#include <stdio.h>
using namespace std;

int main(){
    int t,a,b,c,sa=0,sb=0,sc=0;
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d%d%d",&a,&b,&c);
        sa+=a;
        sb+=b;
        sb+=c;
    }
    if(sa==0 && sb==0 && sc==0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}