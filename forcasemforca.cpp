#include <iostream>

using namespace std;

string frase;
char letra;

int main() {
    cout << "Bem-vindo ao jogo da forca só que sem forca." << endl;
    cout << "Digite uma frase para o próximo jogador adivinhar." << endl;
    getline(cin, frase);

    system("clear");

    string frase_oculta = frase;

    for (char &l : frase_oculta) {
        if (l != ' ') {
            l = '_';
        }
    }

    cout << frase_oculta << "\n\n";

    while (true) {
        cout << "Tente adivinhar a frase!" << endl;
        cin >> letra;

        bool acertou = false;

        for (size_t i = 0; i < frase.size(); i++) {
            if (frase[i] == letra) {
                frase_oculta[i] = letra;
                acertou = true;
            }
        }

        system("clear");

        cout << frase_oculta << "\n\n";

        if (frase_oculta == frase) {
            system("clear");
            cout << "\nParabéns! Você adivinhou a frase: " << frase << endl;
            break;
        }
    }
    return 0;
}
