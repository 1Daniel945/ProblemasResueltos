#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c=0;
    cin>>a>>b;
    while (a<=b)
    {
        if(a>b){
            break;
        }
        else{
            a*=3;
            b*=2; 
            c++;
        }
    }
    cout<<c<<"\n";
    return 0;
}
