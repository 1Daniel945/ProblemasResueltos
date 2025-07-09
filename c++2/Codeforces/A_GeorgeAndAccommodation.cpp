#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x,y,s=0;
    cin>>n;
    while (n--)
    {
        cin>>x>>y;
        if((x+2)<=y){
            s++;
        }
    }
    cout<<s<<"\n";
    return 0;
}
