#include <iostream>
using namespace std;

struct Nodo {
	int val;
	Nodo * next;	
	Nodo(int x) {
		val = x;
		next = NULL;
	}
};

void recorrer(Nodo* &head) {
	Nodo *tmp = head;
	if(tmp == NULL){
		cout << "vacia" << endl;
	}
	while(tmp != NULL) {
		cout << tmp->val << endl;
		tmp = tmp->next;
	}
}

void invertir(Nodo* &head){
	
}

int main(int argc, char *argv[]) {
	
	Nodo * a = new Nodo(3);
	Nodo * b = new Nodo(5);
	Nodo * c = new Nodo(7);
	Nodo * d = new Nodo(2);
	
	a->next = b;
	b->next = c;
	c->next = d;
	
	recorrer(a);
	return 0;
}
