#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	int n;
	cin>>n;
	string s="";
	string s2="";
	while(n--){
		char c;
		cin>>c;
		s+=c;
	}
	int t=s.size();
	int lm=t;
	
	for(int i=0; i<t; i++){
		if((i+1)<t){
			if(s.at(i)=='1' && s.at(i+1)=='0'){
				s2+="";
			}
			else if(s.at(i)=='0' && s.at(i+1)=='1'){
				s2+="";
			}
			else{
				s2+=s.at(i);
			}
		}
		else if(i+1==t-1){
			s2+=s.at(i+1);
		}
		cout<<"s2: "<<s2<<"\n";
	}
	
	return 0;
}
