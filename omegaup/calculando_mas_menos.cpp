#include <bits/stdc++.h>
using namespace std;

int main() {
    std::cin.tie(0);
    std::ios_base::sync_with_stdio(0);
    double a[3];
    for(int i=0; i<3; ++i)cin>>a[i];
    bool ind=0;
    if(a[1]==0){
        ind=1;
    }
    double x=500,x1=500;
    if(ind){
        printf("indefinido\n");
    }
    else{
        if(a[2]==0){
            x=(a[0]/a[1])+a[2];
            printf("%.6lf\n",x);
        }
        else{
            x=(a[0]/a[1])+a[2];
            x1=(a[0]/a[1])-a[2];
            printf("%.6lf %.6lf\n",x,x1);
        }
    }
    return 0;
}