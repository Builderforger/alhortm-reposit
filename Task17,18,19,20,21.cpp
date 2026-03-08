#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    setlocale(0, "");
    while (true) {
        char menu;
        int length;
        char symbol;
		int width, height, type, size;
        cout << "[+]Геометрические фигуры" << endl;
        cout << "[1]Линия\n[2]Квадрат\n[3]Прямоугольник\n[4]Треугольник\n[5]Решетка\n[6]Крестик\n[7]Плюс\n[8]Ромб\n[9]Выход" << endl;
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
            system("CLS");

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
        else if (menu == '4') {
            cout << "[ + ] Фигура: “Треугольник”" << endl;
            cout << "[ 1 ] Заполненный" << endl;
            cout << "[ 2 ] Пустой" << endl;
            cout << "\n[ + ] Выберите тип: ";
            cin >> type;

            cout << "[ + ] Размер (высота): ";
            cin >> size;
            cout << "[ + ] Текстура: ";
            cin >> symbol;
            system("CLS");

            cout << "\n[ + ] Результат:\n" << endl;

            for (int i = 0; i < size; i++) {

                for (int j = 0; j < (2 * size - 1); j++) {

                    int leftBoundary = (size - 1) - i;
                    int rightBoundary = (size - 1) + i;

                    if (type == 1) {
                        if (j >= leftBoundary && j <= rightBoundary) {
                            cout << symbol << " ";
                        }
                        else {
                            cout << ". "; 
                        }
                    }
                    else {
                        if (j == leftBoundary || j == rightBoundary || i == size - 1) {
                            cout << symbol << " ";
                        }
                        else {
                            cout << ". "; 
                        }
                    }
                }
                cout << endl;
            }
        }
        else if (menu == '5') {
            cout << "[ + ] Фигура: “Решетка”" << endl;
            cout << "[ + ] Размер: ";
            cin >> size;
            cout << "[ + ] Текстура: ";
            cin >> symbol;
            system("CLS");

            cout << "\n[ + ] Результат:\n" << endl;

            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size; j++) {
                    if (i % 2 != 0 || j % 2 != 0) {
                        cout << symbol << "   ";
                    }
                    else {
                        cout << ".   ";
                    }
                }
                cout << endl << endl;
            }
        }
        else if (menu == '6') {
            cout << "[ + ] Фигура: “Крестик”" << endl;
            cout << "[ + ] Размер: ";
            cin >> size;
            cout << "[ + ] Текстура: ";
            cin >> symbol;
            system("CLS");

            cout << "\n[ + ] Результат:\n" << endl;
            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size; j++) {
                    if (i == j || i + j == size - 1) {
                        cout << symbol << "   ";
                    }
                    else {
                        cout << ".   ";
                    }
                }
                cout << endl << endl;
            }
        }
        else if (menu == '7') {
            cout << "[ + ] Фигура: “Плюс”" << endl;
            cout << "[ + ] Размер: ";
            cin >> size;
            cout << "[ + ] Текстура: ";
            cin >> symbol;
			system("CLS");

            cout << "\n[ + ] Результат:\n" << endl;

            int center = size / 2;

            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size; j++) {
                    if (i == center || j == center) {
                        cout << symbol << "   ";
                    }
                    else {
                        cout << ".   ";
                    }
                }
                cout << endl << endl;
            }
        }
        else if (menu == '8') {
            cout << "[ + ] Фигура: “Ромб”" << endl;
            cout << "[ + ] Размер (нечетное число): ";
            cin >> size;
            cout << "[ + ] Текстура: ";
            cin >> symbol;
			system("CLS");

            cout << "\n[ + ] Результат:\n" << endl;
            int center = size / 2;
            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size; j++) {
                    if (abs(i - center) + abs(j - center) == center) {
                        cout << symbol << "   ";
                    }
                    else {
                        cout << ".   ";
                    }
                }
                cout << endl << endl;
            }
        }
        else if (menu == '9') {
            cout << "[ + ] Фигура: “Змейка”" << endl;
            cout << "[ + ] Размер: ";
            cin >> size;
            cout << "[ + ] Текстура: ";
            cin >> symbol;
			system("CLS");

            cout << "\n[ + ] Результат:\n" << endl;
            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size; j++) {
                    if (i % 2 == 0) {
                        cout << symbol << "   ";
                    }
                    else {
                        if ((i / 2) % 2 == 0) {
                            if (j == size - 1) cout << symbol << "   ";
                            else cout << ".   ";
                        }
                        else {
                            if (j == 0) cout << symbol << "   ";
                            else cout << ".   ";
                        }
                    }
                }
                cout << endl << endl;
            }
        }
        else if (menu == '10') {
            cout << "[ + ] Фигура: “Рекурсивный квадрат”" << endl;
            cout << "[ + ] Размер (нечетное число): ";
            cin >> size;
            cout << "[ + ] Текстура: ";
            cin >> symbol;

            cout << "\n[ + ] Результат:\n" << endl;

            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size; j++) {
                    int distTop = i;
                    int distBottom = size - 1 - i;
                    int distLeft = j;
                    int distRight = size - 1 - j;

                    int minDist = min({ distTop, distBottom, distLeft, distRight });
                    if (minDist % 2 == 0) {
                        cout << symbol << "   ";
                    }
                    else {
                        cout << ".   ";
                    }
                }
                cout << endl << endl;
            }
        }
        else if (menu == '11') break;
    }
    return 0;
}
