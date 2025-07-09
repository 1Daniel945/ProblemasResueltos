#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	int t;
	scanf("%d",&t);
	while(t--){
		int v;
		scanf("%d",&v);
		int *a = new int[v];
		for(int i=0; i<v; i++){
			scanf("%d",&a[i]);
		}
		int e=0,p=0;
		//Cuentas los ceros
		int tm=0;
		for(int i=0; i<v; i++){
			if(a[p]==0){
				e++;
			}
			p++;
			if(e>tm){
				tm=e;
			}
			if(a[p]==1){
				e=0;
			}
		}
		printf("%d\n",tm);
	}
	return 0;
}
