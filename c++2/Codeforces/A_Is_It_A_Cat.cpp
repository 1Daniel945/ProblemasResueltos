#include <bits/stdc++.h>
#define fi(x) for(int i=0; i<x; ++i)
#define yesNo(x,y) x==y?cout<<"YES\n":cout<<"NO\n"
using namespace std;

int main(){
    int t,n;
    cin>>t;
    while (t--)
    {
        string s,s1="",s2="";
        cin>>n;
        cin>>s;
        //Convertir a minusculas
        fi(s.size()){
            s1+=tolower(s.at(i));
        }
        //Función que elimina todas las letras repetidas
        unique_copy(s1.begin(), s1.end(), back_inserter(s2));
        yesNo("meow",s2);
    }
    return 0;
}