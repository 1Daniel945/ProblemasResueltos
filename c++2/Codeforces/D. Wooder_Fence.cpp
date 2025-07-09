#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	int n;
	cin>>n;
	while(n--){
		int t;
		cin>>t;
		string s="",s1="";
		for(int i=0; i<t; i++){
			char c;
			cin>>c;
			s+=c;
		}
		char b;
		cin>>b;
		int r;
		cin>>r;
		for(int i=0; i<r; i++){
			char c;
			cin>>c;
			s1+=c;
		}
		cout<<s<<" "<<s1;
	}
	return 0;
}
