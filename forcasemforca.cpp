#include <iostream>

using namespace std;

string frase;
char letra;

struct letrasfr {
    char l;
    bool ctrl;
};

int main() {
    cout << "Bem vindo ao jogo da forca só que sem forca." << endl;
    cout << "Digite uma frase para o próximo jogador adivinhar." << endl;
    getline(cin, frase);

    system("clear");

    string frase_mostrada = frase;

    for (char &l : frase_mostrada) { 
        if (l != ' ') {
            l = '_';
        }
    }
    
    for(char c : frase_mostrada){
        cout << c << " ";
    }

    cout << "\n\n";

    while (true) {
        cout << "Tente adivinhar a frase!" << endl;
        cout << "Boa sorte!" << endl;
        cin >> letra;

        bool acertou = false;

        for (size_t i = 0; i < frase.size(); i++) {
            if (frase[i] == letra) {
                frase_mostrada[i] = letra;
                acertou = true;
            }
        }

        if (!acertou) {
            cout << "A letra '" << letra << "' não está na frase. Tente novamente!\n";
        }

        cout << frase_mostrada << "\n\n";

        if (frase_mostrada == frase) {
            cout << "\nParabéns! Você adivinhou a frase: " << frase << endl;
            break;
        }
    }

    return 0;
}
