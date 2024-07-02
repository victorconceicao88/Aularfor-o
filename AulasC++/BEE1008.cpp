#include <iostream>
 #include <iomanip>

using namespace std;
 
int main() {
 
    int numeroFuncionario,horasTrabalhadas;
    float valorHora;
    cin >> numeroFuncionario >> horasTrabalhadas;
    cout << fixed << setprecision(2);
    cin >> valorHora;
    cout << "NUMBER = " << numeroFuncionario << endl; 
    cout << "SALARY = U$ " << valorHora * horasTrabalhadas << endl; 
    return 0;
}