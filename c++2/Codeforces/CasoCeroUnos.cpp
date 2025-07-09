#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	int n;
	cin>>n;
	string s="";
	while(n--){
		char c;
		cin>>c;
		s+=c;
	}
	cout<<s;
	return 0;
}
