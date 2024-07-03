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
            cout << "Informe o primeiro nome do aluno: ";
            cin >> nomeAluno;
            cout << "Informe o sobrenome do aluno: ";
            cin >> sobrenomeAluno;
            cout << "Informe a idade do aluno: ";
            cin >> idadeAluno;
            cout << "O nome completo do novo aluno é:" << nomeAluno + " " + sobrenomeAluno <<endl;
            cout << "e sua idade é :" << idadeAluno <<endl;
            break;
    }

    return 0;
}
