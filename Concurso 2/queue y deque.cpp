#include <bits/stdc++.h>
#define fore(i, l, r) for (long long i = (l); i < (r); i++)
#define forex(i, l, r) for (long long i = (l); i >= (r); i--)
#define ll long long
#define ull unsigned long long
#define nl cout<<"\n"
#define cnl "\n"
#define rfc "\033[31;1m"
#define gfc "\033[32;1m"
#define yfc "\033[33;1m"
#define bfc "\033[34;1m"
#define pfc "\033[35;1m"
#define cfc "\033[36;1m"
#define nfc "\033[0m"
#define pb push_back
using namespace std;

void imprimirQueue(queue<string> q){
	while(!q.empty()){
		cout<<q.front()<<" ";
		q.pop();
	}
	nl;
}

void imprimirDeqeue(deque<int> q){
	while(!q.empty()){
		cout<<q.front()<<" ";
		q.pop_front();
	}
	nl;
}

void imprimeEnLugar(queue<string> q, int pos){
	if(q.size()>pos){
		for(int i=0; i<pos; i++){
			q.pop();
		}
		cout<<q.front();
	}
}

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
     
    queue<string> fila;

	fila.push("Juanito");
	fila.push("Pepe");
	fila.push("Edmundo");
	fila.push("Abraham");
	fila.push("Luis");
	fila.push("Pino");
	imprimirQueue(fila);
	//FIFO
	cout<<fila.size();
	nl;
	imprimeEnLugar(fila, 4);
	nl;
	nl;

	deque<int> dq;
	dq.push_back(10);
	dq.push_back(1);
	dq.push_back(5);
	imprimirDeqeue(dq);

	dq.pop_back();
	imprimirDeqeue(dq);
	dq.push_front(3);
	imprimirDeqeue(dq);

	dq.push_back(5);
	dq.push_front(12);
	dq.push_back(1);
	imprimirDeqeue(dq);
	nl;

	stack<int> s;
	s.push(80);
	s.push(30);
	s.push(10);
	s.push(15);
	s.pop();
	cout<<s.top();

	
}
