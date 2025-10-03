#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int numeroSecreto = rand() % 10 + 1;
    int palpite;

    cout << "Adivinhe o número entre 1 e 10: ";
    cin >> palpite;

    while (palpite != numeroSecreto) {
        if (palpite < numeroSecreto) {
            cout << "Muito baixo! Tente de novo: ";
        } else {
            cout << "Muito alto! Tente de novo: ";
        }
        cin >> palpite;
    }

    cout << "🎉 Parabéns! Você acertou o número!" << endl;
    return 0;
}
