#include <bits/stdc++.h>
#define fi(x) for(int i=0; i<x; ++i)
#define fj(x) for(int j=0; j<x; ++j)
using namespace std;

int main(){
    int t,x;cin>>t;
    while (t--)
    {
        cin>>x;
        int vi[x],s=0,m=0;
        int vj[x],sm[x]{0};
        fi(x){
            cin>>vi[i];
        }
        fi(x){
            cin>>vj[i];
        }
        fi(x){
            s=0;
            fj(x){
                s+=vi[i]+vj[j];
            }
            if(m==0){
                m=s;
            }
            else{
                if(s<m){
                    m=s;
                }
            }
        }
        cout<<m<<"\n";
    }
    return 0;
}
/*
    4  6  10 4  1  4  4  2  3  9   3  9   1
2   6  8  12 6  3  6  6  4  5  11  5  11  3 = 86
7   11 13 17 11 8  11 11 9 10  16 10  16 8 = 129
1   5  7  11 5  2   5  5 3  4  10  4  10  2 = 73
5
7
5
4
4
10
7 
2
1
2
  

  out = 70
*/