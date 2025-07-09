#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	int a,b;
	scanf("%d%d",&a,&b);
	while(a>100 || b>100){
		while(a%2==1 || a>250){
			a = a/2;
		}
		for(int i=0; i<15; i++){
			b = b-a;
			a = a+3;
		}
	}
	printf("%d %d\n",a,b);
	return 0;
}

