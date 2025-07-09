#include <bits/stdc++.h>
using namespace std;

struct Nodo {
	int val;
	Nodo * next;
	
	Nodo(int x){
		val = x;
		next = NULL;
	}
};

//funcion que itere sobre la lista enlazada
void traverse(Nodo* head){
	
}

int main() {
	
	Nodo* a = new Nodo(3);
	Nodo* b = new Nodo(5);
	Nodo* c = new Nodo(7);
	Nodo* d = new Nodo(10);
	
	a->next = b;
	b->next = c;
	c->next = d;
	
	
	
	return 0;
}
