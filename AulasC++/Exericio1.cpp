Ler um nome de funcionario, Ler o Salario de um funcionario.
Apresentar o nome dele e quanto ele ganha por dia dividindo por 30.
Mostrar o valor com pontuacao decimal de 2.

  #include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    
    string nomeFuncionario;
    double salarioFuncionario;
    cout << "Digite O nome do Funcionario " << endl;
    cin >> nomeFuncionario;
    cout << "Digite O valor do Salario = " << endl;
    cin >> salarioFuncionario;
    cout << " O nome Do Funcionario é  = " << nomeFuncionario <<endl;
    cout << fixed << setprecision(2);
    cout <<"Valor do Dia Trabalhado = " << salarioFuncionario/30 << endl;
    return 0;
}

