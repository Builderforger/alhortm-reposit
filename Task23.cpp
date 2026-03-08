#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    double numbers[5]; 
    cout << "=== Инициализация массива на 5 элементов ===" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "[ + ] Введите число #" << i + 1 << ": ";
        cin >> numbers[i];
    }

    for (int i = 0; i < 5; i++) {
        double n = numbers[i];

        cout << "\n| Таблица: " << i + 1 << endl;
        cout << "---------------------------------------------------------" << endl;
        cout << "|   Число   |        Пример        |      Результат     |" << endl;
        cout << "---------------------------------------------------------" << endl;

        for (int op = 0; op < 4; op++) {
            if (op == 0) { 
                cout << "| " << setw(9) << n << " | " << setw(8) << n << " + " << left << setw(8) << n << " | " << right << setw(18) << n + n << " |" << endl;
            }
            else if (op == 1) { 
                cout << "| " << setw(9) << n << " | " << setw(8) << n << " - " << left << setw(8) << n << " | " << right << setw(18) << n - n << " |" << endl;
            }
            else if (op == 2) { 
                cout << "| " << setw(9) << n << " | " << setw(8) << n << " / " << left << setw(8) << n << " | ";
                if (n != 0)
                    cout << right << setw(18) << n / n << " |" << endl;
                else
                    cout << right << setw(18) << "Ошибка (0)" << " |" << endl;
            }
            else if (op == 3) { 
                cout << "| " << setw(9) << n << " | " << setw(8) << n << " * " << left << setw(8) << n << " | " << right << setw(18) << n * n << " |" << endl;
            }
        }
        cout << "---------------------------------------------------------" << endl;
    }

    return 0;
}
