#include <iostream>
#include <map>

using namespace std;

int main(){
    int t,n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        cin.ignore();
        map<string, int>m1;//Almacena la posicion 
        map<string, int>m;//Almacena si se puede formar
        string s;
        for(int i=0; i<n; i++)
        {
            getline(cin, s); 
            m[s]=0;//Almacenar si se puede formar
            m1[s]=i;//Almacenar el orden             
        }

        //Ver que cadenas se pueden formar 
        string s2="";
        for(int i=0; i<n; i++){
            
        }

        for(int i=0; i<m1.size(); i++){
            for(pair <string, int> p: m1){
                if(p.second==i){
                    cout<<p.first<<" "<<p.second<<"\n";
            }
        }
    }
    
    return 0;
}
