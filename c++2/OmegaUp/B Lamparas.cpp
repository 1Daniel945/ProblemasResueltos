#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	int n;
	scanf("%d",&n);
	while(n--){
		int r;
		scanf("%d",&r);
		int *a = new int[r];
		int *b = new int[r];
		int *e = new int[r];//guardar el estado de la lampara
		int x=0,p=0,v,s;
		for(int i=0; i<r; i++){
			scanf("%d%d",&a[i],&b[i]);
		}
		for(int i=0; i<r; i++){
			v=b[i];//toma una lampara para comenzar
			s=a[i];//toma a para comenzar
			
		} 
	}
	return 0;
}
