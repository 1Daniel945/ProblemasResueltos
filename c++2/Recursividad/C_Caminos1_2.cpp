#include <bits/stdc++.h>
using namespace std;

double a,b,c,d;
int ctd=0;

void doblar(){
    if((a<=c || b<=d)&&(a*b<=c*d)){
        return;
    }
    a/=2;
    doblar();
    b/=2;
    doblar();
    ctd++;
}

int main(){
    cin>>a>>b>>c>>d;
    if(a<=c || b<=d && (a*b<=c*d)){
        cout<<"0\n";
    }
    else{
        doblar();
        if(ctd>8){
            cout<<"-1\n";
        }
        else{
            cout<<ctd<<"\n";
        }
    }
    return 0;
}