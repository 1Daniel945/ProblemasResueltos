#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	int n;
	scanf("%d",&n);
	while(n--){
		int x,c;
		scanf("%d",&x);
		//almacenado originalmente
		int *a = new int[x];
		int *b = new int[x];
		int *p = new int[x];
		for(int i=0; i<x; i++){
			scanf("%d",&a[i]);
		}
		c=a[0];
		for(int j=0; j<x-1; j++){
			for(int i=0; i<x; i++){
				b[j] = c-a[i];
				printf("%d",c-a[i]);
			}
		}
		for(int i=0; i<x-1; i++){
			printf("%d\n",b[i]);
		}
	}
	return 0;
}
