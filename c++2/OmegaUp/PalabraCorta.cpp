#include <iostream>
using namespace std;

int main() {
  int n;
  cin>>n;
  string a[n];
  int m=0;
  string s="";
  for(int i=0; i<n; i++){
    cin>>a[i];
    if(m==0){
      m=a[i].size();
      s=a[i];
    }
    if(a[i].size()<m){
      m=a[i].size();
      s=a[i];
    }
  }  
  cout<<s<<"\n"<<m<<"\n";
  m%2==1?cout<<"impar\n":cout<<"par\n";
  return 0;
}