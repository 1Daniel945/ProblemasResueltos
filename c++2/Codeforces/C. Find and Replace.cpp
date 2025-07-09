#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n;
	cin>>n;
	string *arr = new string[n];
	for(int x=0; x<n; x++){
		int t;
		cin>>t;
		char c;
		string s = ""; 
		for(int i=0; i<t; i++){
			cin>>c;
			s+=c;
		}
		bool isTrue = true;
		bool cero = true;
		int tm = s.length();
		char l;
		for(int i=0; i<tm; i++){
			l = s.at(i);
			for(int j=0; j<tm; j++){
				if(s.at(j)==l && cero){
					s.at(j)='0';
				}
				if(s.at(j)==l && !cero){
					s.at(j)='1';
				}
			}
			if(cero){
				cero = false;
			}
			else{
				cero = true;
			}
		}
		//Buscar que se intercalen los binarios 
		for(int i=0; i<tm; i++){
			if((i+1)<tm){
				if(s.at(i)==s.at(i+1)){
					isTrue = false;
					break;
				}
			}
		}
		if(isTrue){
			arr[x]="YES";
		}
		else{
			arr[x]="NO";
		}
	}
	for(int y=0; y<n; y++){
		cout<<arr[y]<<"\n";
	}
	return 0;
}
