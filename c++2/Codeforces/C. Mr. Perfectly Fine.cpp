#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	int t;
	scanf("%d",&t);
	while(t--){
		int b;
		scanf("%d",&b);
		int *a = new int[b];
		char *c = new char[b];
		char *c1=new char[b];
		for(int i=0; i<b; i++){
			char bs;
			scanf("%d%c%c%c",&a[i],&bs,&c[i],&c1[i]);
			
		}
	}
	return 0;
}
