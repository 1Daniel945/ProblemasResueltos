#include <iostream>
using namespace std;

int l,c,p,q,k;
string s="";

void sp(string &s1){
    if(c>k)return;
    if(k>c){
        if(k%2==0){
            for(int i=0; i<((k-1)/2); i++){
                cout<<s[i]<<" ";
            }
        }
        cout<<"\n";
        if(k%2==1){
            for(int i=0; i<((k+1)/2)-1; i++){
                cout<<s[i]<<"\n";
            }
        }
    }
}

int main(){
    cin>>l;
    char C;
    for(int i=0; i<l; i++){
        cin>>C;
        s+=C;
    }
    k=l;
    cin>>c;
    sp(s);
    return 0;
}

//5-1=4/2 = 2
//5+1=6/2 = 3