#include <iostream>
//#include <stack>//Funciona con solamente el stack y el queue, y con mis stacks y queues
//#include <queue>
//#include "Fila.h" 
#include "Pila.h" 
#include "filacircular.h"
using namespace std;
bool palindrome(string s){
	stack<char> pila;
	queue<char> fila;
	for(int i = 0; i<s.length(); i++){
		pila.push(s[i]);	
		fila.push(s[i]);	
	}
	do
	{
		if( pila.top() != fila.front() )
			return false; 

		pila.pop();
		fila.pop();

	}while(!pila.empty());
	return true; 
}

int main(){
	string frase;
	while(cin>>frase){
		if(palindrome(frase))
			cout<<"La frase: "<<frase<<" es palindrome."<<endl;
		else
			cout<<"La frase: "<<frase<<" no es palindrome."<<endl;
	}
}
