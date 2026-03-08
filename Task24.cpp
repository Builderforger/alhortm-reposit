#include <iostream>
#include <algorithm> 
using namespace std;

int main() {
    setlocale(0, "");

    int arr[7];
    int choice = 0;
    cout << "=== Инициализация массива на 7 элементов ===" << endl;
    for (int i = 0; i < 7; i++) {
        cout << "[ + ] Инициализация | ячейка " << i << ": ";
        cin >> arr[i];
    }

    while (choice != 0) { 
        cout << "\n[ + ] Текущий массив: ";
        for (int i = 0; i < 7; i++) cout << arr[i] << " ";

        cout << "\n\n[ + ] Настройки массива:\n" << endl;
        cout << "[ 1 ] Сортировка по возрастанию" << endl;
        cout << "[ 2 ] Сортировка по убыванию" << endl;
        cout << "[ 3 ] Перемножить массив" << endl;
        cout << "[ 4 ] Сложить массив" << endl;
        cout << "[ 5 ] Разделить массив" << endl;
        cout << "[ 6 ] Обнулить массив" << endl;
        cout << "[ 9 ] Задать новые значения массиву" << endl;
        cout << "[ + ] Ввод: ";
        cin >> choice;

        if (choice == 1 || choice == 2) {
            for (int i = 0; i < 6; i++) {
                for (int j = 0; j < 6 - i; j++) {
                    bool condition = (choice == 1) ? (arr[j] > arr[j + 1]) : (arr[j] < arr[j + 1]);
                    if (condition) {
                        swap(arr[j], arr[j + 1]);
                    }
                }
            }
            cout << ">> Массив отсортирован!" << endl;
        }
        else if (choice == 3) {
            int factor;
            cout << "Введите число для умножения: "; cin >> factor;
            for (int i = 0; i < 7; i++) arr[i] *= factor;
        }
        else if (choice == 4) {
            int num;
            cout << "Введите число для сложения: "; cin >> num;
            for (int i = 0; i < 7; i++) arr[i] += num;
        }
        else if (choice == 5) {
            int divisor;
            cout << "Введите число для деления: "; cin >> divisor;
            if (divisor != 0) {
                for (int i = 0; i < 7; i++) arr[i] /= divisor;
            }
            else cout << "Ошибка: деление на ноль!" << endl;
        }
        else if (choice == 6) {
            for (int i = 0; i < 7; i++) arr[i] = 0;
            cout << ">> Массив обнулен!" << endl;
        }
        else if (choice == 9) {
            for (int i = 0; i < 7; i++) {
                cout << "[ + ] Новое значение | ячейка " << i << ": ";
                cin >> arr[i];
            }
        }
    }

    return 0;
}
