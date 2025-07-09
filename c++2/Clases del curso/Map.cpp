#include <iostream>
#include <map>
using namespace std;

int main(int argc, char *argv[]) {
	int n;
	string s;
	cin>>n;
	while(n--){
		getline(cin, s);
		cout<<"s: "<<s<<endl;
		map<char,int>letras;
		for(int i=0; i<s.size(); i++){
			letras[s[i]];
		}
	    for(pair<char, int> p: letras){
			cout<<p.first<<"\n";
		}
	}
	return 0;
}
