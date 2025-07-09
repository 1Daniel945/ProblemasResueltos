#include <iostream>
using namespace std;

int main(){
    int n;
    double s=0;
    cin>>n;
    int c[n];
    double p[n];
    for(int i=0; i<n; i++){
        cin>>c[i]>>p[i];
    }
    for(int i=0; i<n; i++){
        p[i]=(p[i]/100)*c[i];
        s+=p[i];
        for(int x=0; x<c[i]; x++){
            cout<<"*";
        }
        cout<<"\n";
    }
    int x=s;
    x>=6?cout<<x<<"\n:)\n":cout<<"0\n:(\n";
    return 0;
}