#include <iostream>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        string s;
        string s1[n];
        int a[n]{0};
        for(int i=0; i<n; i++){
            cin>>s;
            s1[i]=s;
        }
        for(int i=0; i<n; i++){
            for (int j=0; j<s1[i].size(); j++){
                cout<<s1[i].substr(0,1)+s1[i].substr(1,j)<<" "<<s1[j]<<"\n";
            }
        }
        for(int i=0; i<n; i++){
            cout<<a[i];
        }
        cout<<"\n";
    }
    
    return 0;
}