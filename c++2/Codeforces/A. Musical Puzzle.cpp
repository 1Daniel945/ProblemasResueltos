#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	int n;
	cin>>n;
	while(n--){
		int x;
		cin>>x;
		string s="";
		for(int i=0; i<x; i++){
			char c;
			cin>>c;
			s+=c;
		}
		//Formar melodias de 2 en dos
		string m="";
		int cm=0;
		for(int i=0; i<x; i++){
			for(int j=0; j<(i+2); j++){
				cout<<s.at(j)<<" ";
			}
			cout<<"\n";
		}
	}
	return 0;
}
