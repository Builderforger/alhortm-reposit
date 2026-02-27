#include "prog.h"
#include <iostream>
#include <ctime>

using namespace std;

int main() {
    setlocale(0, "");
    srand(time(0));

    int menu;
    while (true) {
        cout << "\n1. Начать игру\n2. Выйти\n[ > ] ";
        cin >> menu;

        if (menu == 2) break;
        if (menu != 1) continue;


        int target[3], guessedCount = 0, attempts = 5;
        for (int i = 0; i < 3; ) {
            target[i] = rand() % 10 + 1;
            bool unique = true;
            for (int j = 0; j < i; j++) if (target[i] == target[j]) unique = false;
            if (unique) i++;
        }

        while (attempts > 0 && guessedCount < 3) {
            cout << "\n[ + ] Угаданных: [ " << guessedCount << " / 3 ]";
            cout << "\n[ + ] Попыток: [ " << attempts << " ]";
            cout << "\n[ > ] Угадать число: ";

            int input;
            cin >> input;

            if (input < 1 || input > 10) {
                cout << "[ ! ] Ошибка (от 1 до 10)\n";
                continue;
            }

            bool hit = false;
            for (int i = 0; i < 3; i++) {
                if (target[i] == input) {
                    hit = true;
                    target[i] = -1; 
                    guessedCount++;
                    break;
                }
            }

            if (hit) cout << "[ + ] Вы угадали число!\n";
            else cout << "[ - ] Вы не угадали число!\n";

            attempts--;
        }

        if (guessedCount == 3) cout << "\n*** ПОБЕДА! ***\n";
        else cout << "\n*** ПРОИГРЫШ! ***\n";
    }
    return 0;
}
