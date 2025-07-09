#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    vector<int>vt;
    cin>>t;
    while (t--)
    {
        cin>>n;
        int m=1;
        while (n>0)
        {
            if(n%10>0){
                vt.push_back((n%10)*m);
            }
            n/=10;
            m*=10;
        }
        cout<<vt.size()<<"\n";
        for(auto e: vt){
            cout<<e<<" ";
        }
        cout<<"\n";
        vt.clear();
    }
    return 0;
}

