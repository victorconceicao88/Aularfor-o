Ler um nome de funcionario, Ler o Salario de um funcionario.
Apresentar o nome dele e pegar 10% do seu salario.
Mostrar o valor com pontuacao decimal de 2.

#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    
    string nomeFuncionario,sobrenomeFuncionario;
    double salarioFuncionario;
    cout << "Digite o primeiro nome do Funcionario:" << endl;
    cin >> nomeFuncionario;
    cout << "Digite o sobrenome do Funcionario:" << endl;
    cin >> sobrenomeFuncionario;
    cout << "Digite O Salario do Funcionario:" << endl;
    cin >> salarioFuncionario;
    cout << "O nome completo Do Funcionario é:" << nomeFuncionario + " " + sobrenomeFuncionario <<endl;
    cout << fixed << setprecision(2);
    double valorDesconto = salarioFuncionario * 0.10;
    double salarioDescontado = salarioFuncionario - valorDesconto;
    cout <<" o salario deste funcionario menos 10 porcento e de : " << salarioDescontado << endl;
    return 0;
}