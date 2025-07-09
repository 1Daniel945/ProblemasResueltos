#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,s=0;
    cin>>n;
    string st;
    while (n--)
    {
        cin>>st;
        st=="Tetrahedron"?s+=4:s;
        st=="Cube"?s+=6:s;
        st=="Octahedron"?s+=8:s;
        st=="Dodecahedron"?s+=12:s;
        st=="Icosahedron"?s+=20:s;
    }
    cout<<s<<"\n";
    return 0;
}