#include <iostream>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    while (t--){
        string c="";
        cin>>n;
        cin.ignore();
        string arr[n];
        int x[n];
        for(int i=0; i<n; i++){
            cin>> arr[i];
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                for(int y=0; y<n; y++){
                    if(arr[i]+arr[j]==arr[y]){
                        x[y]=1;
                    }
                }
            }
        }
        for(int i=0; i<n; i++){
            if(x[i]!=1){
				x[i]=0;
			}
			c+=to_string(x[i]);
        }
        cout<<c<<"\n";
    }
    
    return 0;
}
