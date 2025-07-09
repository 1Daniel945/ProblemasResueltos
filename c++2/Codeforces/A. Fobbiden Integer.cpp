#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	int n;
	scanf("%d",&n);
	while(n--){
		int n,k,x,s=0,c=0;
		scanf("%d%d%d",&n,&k,&x);
		for(int i=1; i<=k; i++){
			if(i!=x && s<n){
				s+=i;
			}
		}
		printf("%d %d\n",s,c);
	}
	return 0;
}
