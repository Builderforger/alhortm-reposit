#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    while (true) {
        char menu;
        cout << "[+]Геометрические фигуры" << endl;
        cout << "[1]Линия.\n[2]Выход" << endl;
        cout << "Ваш выбор ";
        cin >> menu;
        system("CLS");
        if (menu == '1') {
            int length;
            char symbol;
            cout << "Выбери длину линии: ";
            cin >> length;
            cout << "Выбери символ: ";
            cin >> symbol;
            system("CLS");
            int i = 0;
            while (length > i) {
                cout << symbol << " ";
                i++;
            }
        }
        else if (menu == '2') break;
    }
}
