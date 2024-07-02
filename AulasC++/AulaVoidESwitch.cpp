/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void saberDia(int dia){
    switch (dia) {
     case 1:
       cout << "Segunda-Feira" << endl;
       break;
     case 2:
       cout << "Terca-Feira" << endl;
       break;
     case 3:
       cout << "Quarta-Feira" << endl;
       break;
     case 4:
       cout << "Quinta-Feira" << endl;
       break;
     case 5:
       cout << "Sexta-Feira" << endl;
       break;
     case 6:
       cout << "Sabado" << endl;
       break;
     case 7:
       cout << "Domingo" << endl;
       break;
     default: 
     cout << "Dia da semana nao encontrado" << endl;
   }
}

int main()
{
    int dia;
    cout << "Digite para saber o dia da semana: "; 
    cin >> dia;
    saberDia(dia);
    return 0;
}

