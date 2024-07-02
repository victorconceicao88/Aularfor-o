/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <stack>
#include <queue>

using namespace std;


int main()
{ 
   string nome;
   stack<string> fila;
   cout << "Insira o nome para adicionar em sua lista" << endl;
   cin >> nome;
   fila.push(nome); 
   cout << fila.size() << endl;
   
    // fila.size() -> Aprende a saber a quantia que tem na lista
    // fila.pop() -> Remover o ultimo item adicionado da lista
    // fila.push(item) -> Serve para adicionarmos um item na lista
    // fila.back -> acessar o ultimo item da lista;
    return 0;
}

