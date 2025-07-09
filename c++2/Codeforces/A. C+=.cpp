#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	int n;
	scanf("%d",&n);
	while(n--){
		int a,b,ex,c=0,m=0,ta,tb;
		scanf("%d%d%d",&a,&b,&ex);
		while(a<=ex){
			//Almacenar los valores iniciales
			ta=a;
			tb=b;
			//Realizar solo la operacion a+=b
			a+=b;
			c++;
			if(m==0){
				m=c;
			}
			//Tomar la menor cantidad de operaciones
			if(c<m){
				m=c;
			}
		}
		printf("%d\n",m);//imprimir el menor
	}
	return 0;
}

