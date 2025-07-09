#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
    int n;
	scanf("%d",&n);
	while(n--){
		int x,y,s=0;
		scanf("%d",&x);
		for(int i=0; i<x; i++){
			scanf("%d",&y);
			if(y<0){
				y = (y*(-1));
			}
			s+=y;
		}
		printf("%d\n",s);
	}
	return 0;
}
