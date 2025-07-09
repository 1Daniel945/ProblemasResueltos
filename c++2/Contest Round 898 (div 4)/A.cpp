#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    char c1,c2,c3;
    cin>>t;
    while (t--)
    {
        cin>>c1;
        cin>>c2;
        cin>>c3;
        if(c1=='a' && c2=='b'&&c3=='c'){
            cout<<"YES\n";
        }
        else if(c1=='b'&&c2=='a'&&c3=='c'){
            cout<<"YES\n";
        }
        else if(c1=='a'&&c2=='c'&&c3=='b'){
            cout<<"YES\n";
        }
        else if(c1=='c'&&c2=='b'&&c3=='a'){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}