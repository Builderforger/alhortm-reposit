#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    while (true) {
        char menu;
        int length;
        char symbol;
		int width, height, type;
        cout << "[+]Геометрические фигуры" << endl;
        cout << "[1]Линия\n[2]Квадрат\n[3]Прямоугольник\n[4]Выход" << endl;
        cout << "Ваш выбор ";
        cin >> menu;
        system("CLS");
        if (menu == '1') {
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
        else if (menu == '2') {
            cout << "Выбери длину стороны квадрата: ";
            cin >> length;
            cout << "Выбери символ: ";
            cin >> symbol;
            system("CLS");
            for (int i = 0; i < length; i++) {
                for (int j = 0; j < length; j++) {
                    cout << symbol << " ";
                }
                cout << endl;
            }
		}
        else if (menu == '3') {
            cout << "Введите ширину: ";
            cin >> width;
            cout << "Введите высоту: ";
            cin >> height;
            cout << "Выберите тип (1 - Заполненный, 2 - Пустой): ";
            cin >> type;
            cout << "Введите символ (текстуру): ";
            cin >> symbol;

            cout << "\nРезультат:\n" << endl;

            for (int i = 0; i < height; i++) { 
                for (int j = 0; j < width; j++) { 

                    if (type == 1) {
                        cout << symbol << " ";
                    }
                    else {
                        if (i == 0 || i == height - 1 || j == 0 || j == width - 1) {
                            cout << symbol << " ";
                        }
                        else {
                            cout << "  "; 
                        }
                    }
                }
                cout << endl; 
            }
        }
        else if (menu == '4') break;
    }
}
