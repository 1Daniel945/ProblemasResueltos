#include <iostream>
#include <map>
using namespace std;

int main(int argc, char *argv[]) {
	string s;
	int q,p,k;
	map<int, int>mapa;
	while (true){
		cin>>s;
		if(s=="#"){
			break;
		}
		cin>>q>>p;
		cin.ignore();
		mapa[q]=+p;
	}
	cin>>k;
	for(pair <int, int> p: mapa){
		cout<<p.first<<" "<<p.second<<"\n";
	}
	return 0;
}

