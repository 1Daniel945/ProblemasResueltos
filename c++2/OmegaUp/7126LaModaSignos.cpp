#include <iostream>
#include <map>
using namespace std;

int main() {
	int n,mx=0,p=0,ng=0;
	cin>>n;
	char c[n];
	int x[n];
	int v;
	map<int, int>m;
	//Contar cuantas veces aparece cada numero
	for(int i=0; i<n; i++){
		cin>>c[i]>>x[i];
		m[x[i]]++;
	}
	//Buscar cual es el que se repitio mas veces
	for(pair<int, int>p:m){
		if(mx==0){
			mx=p.first;
			v=p.second;
		}
		if(v==p.second){
			if(p.first<mx){
				mx=p.first;
				v=p.second;
			}
		}
		else{
			if(p.second>v){
				mx=p.first;
				v=p.second;
			}
		}
	}
	for(int i=0; i<n; i++){
		if(x[i]==mx){
			if(c[i]=='+'){
				p++;
			}	
			else if(c[i]=='-'){
				ng++;
			}
		}
	}
	cout<<mx<<"\n";
	cout<<p<<" "<<ng<<"\n";
	return 0;
}