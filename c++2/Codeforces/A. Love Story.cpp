#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	string s="codeforces",s1;
	int n;
	cin>>n;
	while(n--){
		cin>>s1;
		int c=0,t;
		t=s.length();
		for(int i=0; i<t; i++){
			if(s.at(i)!=s1.at(i)){
				c++;
			}
		}
		cout<<c<<"\n";
	}
	return 0;
}
