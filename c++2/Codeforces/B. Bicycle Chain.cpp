#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	int n,m;
	double v;
	int c=0,s=0;
	cin>>n;
	double *an = new double[n];
	for(int i=0; i<n; i++){
		cin>>an[i];
	}
	cin>>m;
	double *am = new double[m];
	string *x = new string[m];
	for(int i=0; i<m; i++){
		cin>>am[i];
	}
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			v = am[i]/an[j];
			if(c==0){
				c=v;
			}
			else{
				if(v>c){
					c=v;
				}
			}
		}
	}
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			v = am[i]/an[j];
			if(v==c){
				s++;
			}
		}
	}
	cout<<s;	
	return 0;
}
