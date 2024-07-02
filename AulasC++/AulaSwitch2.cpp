/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;



int main()
{
    int click;
    cout << "########################################################################" << endl; 
    cout << "#                                                                      #" << endl; 
    cout << "#                                                                      #" << endl; 
    cout << "#                     RESTAURANTE DO JOTA                              #" << endl; 
    cout << "#                                                                      #" << endl; 
    cout << "#                                                                      #" << endl; 
    cout << "########################################################################" << endl; 
    cout << "Digite o numero para saber as informacoes do dia" << endl;
    cout << "[1] - Saber o Prato Principal" << endl;
    cout << "[2] - Saber a Sobremesa" << endl;
    cout << "[3] - Saber o Acompanhamento Liquido" << endl;
    cin >> click;
    
      switch (click) {
     case 1:
       cout << "Feijoada" << endl;
       break;
     case 2:
       cout << "Pudim" << endl;
       break;
     case 3:
       cout << "Suco de Laranja" << endl;
       break;
     default: 
      cout << "Item nao encontrado em nosso menu" << endl;
      }
    return 0;
}

