#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	int n;
	scanf("%d",&n);
	int *a = new int[n];
	for(int i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	//Generar subsecuencia
	int m=0,s=0;
	for(int i=0; i<n; i++){
		int ps=i;
		for(int j=ps; j<n; j++){
			s+=a[j];
			if(s>m){
				m=s;
			}
		}
		printf("%d\n",s);
		s=0;
		ps++;
	}
	return 0;
}
