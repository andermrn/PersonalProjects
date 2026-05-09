#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    // Variaveis ------------------------
    vector<string> nome_participantes;
    string nome_inserido;
    int opcao;
    bool encontrar;
    //----------------------------------
    do
    {
        // Menu do programa
        cout << "\n\n===== EVENTO DA SEMAGRARIA =====\n";
        cout << "\n1 - Adicionar participante\n2 - Listar participantes\n3 - Buscar participante\n4 - Remover participante\n5 - Encerrar programa\n\nEscolha uma opcao: ";
        cin >> opcao;
        cin.ignore(); // remove o enter guardado num tall de buffer q pesquisei
        cout << "\n";

        // Casos de escolha
        switch (opcao)
        {
        case 1:
            cout << "Digite o nome do participante: ";
            getline(cin, nome_inserido);                 // getline para ler a linha completa (pegar nomes compostos)
            nome_participantes.push_back(nome_inserido); // pushback para adicionar ao vetor
            cout << "Participante cadastrado com sucesso!";
            break;

        case 2:
            cout << "===== PARTICIPANTES =====\n\n";
            if (nome_participantes.size() == 0)
            {
                cout << "\nAinda nao ha participantes na lista.\n";
                break;
            }
            else
            {
                for (int i = 0; i < nome_participantes.size(); i++)
                {
                    cout << i + 1 << " - " << nome_participantes[i] << endl;
                }
                cout << "\nTotal de participantes: " << nome_participantes.size();
                break;
            }

        case 3:
            cout << "Digite o nome para buscar: ";
            getline(cin, nome_inserido);
            encontrar = false; // assumindo que nao foi encontrado pra passar pela validação
            for (int i = 0; i < nome_participantes.size(); i++)
            {
                if (nome_inserido == nome_participantes[i])
                {
                    encontrar = true;
                    break;
                }
            }
            if (nome_participantes.size() == 0)
            {
                cout << "\nParticipante nao encontrado pois nao ha nenhum nome na lista.\n";
            }

            else if (encontrar == true)
            {
                cout << "\nParticipante encontrado!\n";
            }
            else
            {
                cout << "\nParticipante nao encontrado!\n";
            }
            break;

        case 4:
            cout << "Digite o nome para remover: ";
            getline(cin, nome_inserido);
            encontrar = false;

            for (int i = 0; i < nome_participantes.size(); i++)
            {
                if (nome_inserido == nome_participantes[i])
                {
                    nome_participantes.erase(nome_participantes.begin() + i);
                    encontrar = true;
                    cout << "\nParticipante removido(a) com sucesso!\n";
                    break;
                }
            }
            if (encontrar == false)
            {
                cout << "\nParticipante nao encontrado.\n";
            }
            break;

        case 5:
            cout << "Programa encerrado.\n";
            break;

        default:
            cout << "\nDigite uma opcao valida!\n";
            break;
        }

    } while (opcao != 5);

    return 0;
}