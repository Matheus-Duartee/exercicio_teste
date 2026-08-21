#include <iostream>
#include <string>
#include <cstdlib> // Necessário para a função system()

using namespace std;

int main() {
    string nomeAluno;
    float nota1, nota2, nota3;
    float media;

    // 1. Entrada de dados do aluno
    cout << "=== SISTEMA DE CADASTRO DE NOTAS ===" << endl;
    cout << "Digite o nome do aluno: ";
    getline(cin, nomeAluno);

    // 2. Leitura das 3 notas
    cout << "Digite a primeira nota: ";
    cin >> nota1;

    cout << "Digite a segunda nota: ";
    cin >> nota2;

    cout << "Digite a terceira nota: ";
    cin >> nota3;

    // 3. Calculo da media
    media = (nota1 + nota2 + nota3) / 3.0;

    // 4. Exibicao dos resultados
    cout << "\n-----------------------------------" << endl;
    cout << "Aluno: " << nomeAluno << endl;
    cout << "Media final: " << media << endl;

    // Verifica a situacao do aluno
    if (media >= 7.0) {
        cout << "Situacao: APROVADO!" << endl;
    } else {
        cout << "Situacao: REPROVADO!" << endl;
    }
    cout << "-----------------------------------" << endl;

    // Garante que a tela nao feche imediatamente no Code::Blocks/Windows
    system("pause");

    return 0;
}
