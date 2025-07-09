#include <iostream>
using namespace std;

char mt[4][4];

int main(){
    int t,l=0,p=0,c=0,q=0,cj=0;
    string s;
    cin>>t;
    cin.ignore();
    while (t--)
    {
        getline(cin, s);
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                cin>>mt[i][j];
            }
            cin.ignore();
        }
        mt[0][0]=='#'?l++:l;
        mt[0][1]=='#'?c++:c;
        mt[0][2]=='#'?l++:l;
        mt[1][0]=='#'?p++:p;
        mt[1][1]=='#'?q++:q;
        mt[1][2]=='#'?p++:p;
        mt[2][0]=='#'?l++:l;
        mt[2][1]=='#'?cj++:cj;
        mt[2][2]=='#'?l++:l;
    }
    cout<<l<<"\n";
    cout<<p<<"\n";
    cout<<c<<"\n";
    cout<<q<<"\n";
    cout<<cj<<"\n";
    return 0;
}