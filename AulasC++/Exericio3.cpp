# Fazer o menu de uma academia
# Ao clicar no 1 saber valor mensal
# Ao clicar no 2 fazer um cadastro ler (nome e idade) e apresentar o nome e idade do usuario





#include <iostream>
#include <string>

using namespace std;

int main() {
    string nomeAluno,sobrenomeAluno;   
    int idadeAluno;
    int click;

    cout << "########################################################################" << endl;
    cout << "#                                                                      #" << endl;
    cout << "#                                                                      #" << endl;
    cout << "#                   Tabela de Informações da Academia                  #" << endl;
    cout << "#                                                                      #" << endl;
    cout << "#                                                                      #" << endl;
    cout << "########################################################################" << endl;
    cout << "[1] - Saber o valor mensal" << endl;
    cout << "[2] - Clique para fazer o cadastro" << endl;

    cin >> click;

    switch (click) {
        case 1:
            cout << "o valor mensal é de 49.90 R$ por mês ! Aproveite a Oferta e bora fazer o cadastro?" << endl;
            break;
        case 2:
            cout << "Qual o seu primeiro nome? ";
            cin >> nomeAluno;
            cout << "Qual o seu sobrenome? ";
            cin >> sobrenomeAluno;
            cout << "Qual a sua Idade? ";
            cin >> idadeAluno;
            cout << "O seu nome completo é:" << nomeAluno + " " + sobrenomeAluno <<endl;
            cout << "e voçê tem:" << idadeAluno << "anos de idade" <<endl;
            break;
    }

    return 0;
}