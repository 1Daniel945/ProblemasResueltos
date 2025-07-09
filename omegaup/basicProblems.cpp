#include <stdio.h>
#define fi(x)for(int i=0; i<x; ++i)
#define in >>
#define my >=
#define mn <=
#define p <<
#define psi(t,x) for(pair<string,int>t:x)

/*
int main() {
    int n,s=0,m=1;
    fi(4){
        scanf("%d",&n);
        s+=n;
        m*=n;
    }
    printf("%d %d\n",s,m);
    return 0;
}*/

int main() {
    double a,b;
    scanf("%lf%lf",&a,&b);
    double s=(a/b)*100;
    printf("%.2lf\n",s);
    return 0;
}