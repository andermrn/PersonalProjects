#include <iostream>
using namespace std;

int main()
{
    // Opcao = escolher uma das 6 opcoes
    // n1, n2 sao oos numeros que o usuario irá digitar
    // c(contador) = e o contador para o vetor
    // r(resultado) é o resultado das operaçoes
    // h(historico) é o vetor
    int opcao, c = 0;
    float n1, n2, r, h[100];
    do
    {
        cout << "\n\t====== CALCULADORA.C++ ======\n";
        cout << "\n1 - Somar\n2 - Subtrair\n3 - Multiplicar\n4 - Dividir\n5 - Ver historico\n0 - Sair\nEscolha uma opcao: ";
        cin >> opcao;

        switch (opcao)
        {
        case 1:
            cout << "Digite dois numeros: ";
            cin >> n1 >> n2;
            r = n1 + n2;
            cout << "Resultado: " << r << endl;
            h[c] = r;
            c++;
            break;

        case 2:
            cout << "Digite dois numeros: ";
            cin >> n1 >> n2;
            r = n1 - n2;
            cout << "Resultado: " << r << endl;
            h[c] = r;
            c++;
            break;

        case 3:
            cout << "Digite dois numeros: ";
            cin >> n1 >> n2;
            r = n1 * n2;
            cout << "Resultado: " << r << endl;
            h[c] = r;
            c++;
            break;

        case 4:
            cout << "Digite dois numeros: ";
            cin >> n1 >> n2;
            if (n2 == 0)
            {
                cout << "Nao e permitido dividir por 0(zero)!\n";
            }
            else
            {
                r = n1 / n2;
                cout << "Resultado: " << r << endl;
                h[c] = r;
                c++;
            }

            break;
        case 5:
            for (int i = 0; i < c; i++)
            {
                cout << "Historico: " << h[i] << endl;
            }
            break;
        case 0:
            cout << "\nSaindo...";
            return 0;
            
            default:
                cout << "Opcao invalida!\n";
                break;
        }
    } while (opcao != 0);

    return 0;
}