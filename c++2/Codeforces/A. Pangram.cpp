#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    set<char>st;
    while (n--)
    {
        char x;
        cin>>x;
        st.insert(tolower(x));
    }
    if(st.size()==26){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    return 0;
}
