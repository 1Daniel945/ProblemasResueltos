#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	int n;
	scanf("%d",&n);
	while(n--){
		int x;
		scanf("%d",&x);
		int *a =new int[x];
		int p=0,ip=0,cm=0;
		for(int i=0; i<x; i++){
			scanf("%d",&a[i]);
		}
		for(int i=0; i<x; i++){
			if(a[i]%2==0 && a[i]>0){
				p++;
				cm++;	
			}
			else if(a[i]>0 && a[i]%2==1){
				ip++;
				cm++;
			}
		}
		if((p==x||ip==x)&&(cm==x)){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}

