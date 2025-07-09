#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<(int)n; ++i)
#define fi(i,x,n)for(int i=(int)x-1; i>=n; --i)
#define in >>
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define mps(a,b,x) map<a,b>x;
#define vp(x) vector<pair<int,int>>x;
#define v(x,d) vector<d>x;
#define fastio()ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
using namespace std;

int main(){
    double x[4];
    double y[4];
    fr(i,0,4){
        cin in x[i] in y[i];
    }
    //Calcular distancia con x1 y y1
    /*
        sqrt(((x2-x1)^2)+((y2-y1)^2));
    */
    v(v,double);
    int l[4]={0,1,2,3};
    fr(i,0,4){
        if(i!=l[0]){
            double d=sqrt((pow((x[i]-x[l[0]]),2)+pow((y[i]-y[l[0]]),2)));
            v.push_back(d);
        }
        if(i!=l[1]){
            double d=sqrt((pow((x[i]-x[l[1]]),2)+pow((y[i]-y[l[1]]),2)));
            v.push_back(d);
        }
        if(i!=l[2]){
            double d=sqrt((pow((x[i]-x[l[2]]),2)+pow((y[i]-y[l[2]]),2)));
            v.push_back(d);
        }
        if(i!=l[3]){
            double d=sqrt((pow((x[i]-x[l[3]]),2)+pow((y[i]-y[l[3]]),2)));
            v.push_back(d);
        }
    }
    sort(v.begin(),v.end());
    printf("%.6lf",v[0]);
    return 0;
}