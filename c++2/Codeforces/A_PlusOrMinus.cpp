#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,a,b,c;
    cin>>n;
    while (n--)
    {
        cin>>a>>b>>c;
        a+b==c?cout<<"+\n":cout<<"-\n";
    }
    return 0;
}