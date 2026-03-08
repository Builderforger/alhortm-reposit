#include <iostream>
#include <string>

using namespace std;

int main() {
    setlocale(0, "");

    int arrInt[10] = { 1, 20, 32, 4, 1, 2, 2, 54, 23, 0 };
    cout << "[ + ] Массив INT:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "[ + ] arrInt [ " << i << " ]\t| значение: " << arrInt[i] << endl;
    }
    cout << "------------------------------------------" << endl;

    short arrShort[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
    cout << "[ + ] Массив SHORT:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "[ + ] arrShort [ " << i << " ]\t| значение: " << arrShort[i] << endl;
    }
    cout << "------------------------------------------" << endl;

    long arrLong[10] = { 100000L, 200000L, 300000L, 400000L, 500000L, 600000L, 700000L, 800000L, 900000L, 1000000L };
    cout << "[ + ] Массив LONG:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "[ + ] arrLong [ " << i << " ]\t| значение: " << arrLong[i] << endl;
    }
    cout << "------------------------------------------" << endl;

    float arrFloat[10] = { 1.1f, 2.2f, 3.3f, 4.4f, 5.5f, 6.6f, 7.7f, 8.8f, 9.9f, 10.1f };
    cout << "[ + ] Массив FLOAT:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "[ + ] arrFloat [ " << i << " ]\t| значение: " << arrFloat[i] << endl;
    }
    cout << "------------------------------------------" << endl;

    double arrDouble[10] = { 0.123, 0.456, 0.789, 1.011, 2.022, 3.033, 4.044, 5.055, 6.066, 7.077 };
    cout << "[ + ] Массив DOUBLE:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "[ + ] arrDouble [ " << i << " ] | значение: " << arrDouble[i] << endl;
    }
    cout << "------------------------------------------" << endl;

    char arrChar[10] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J' };
    cout << "[ + ] Массив CHAR:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "[ + ] arrChar [ " << i << " ]\t| значение: " << arrChar[i] << endl;
    }
    cout << "------------------------------------------" << endl;

    bool arrBool[10] = { true, false, true, true, false, false, true, false, true, true };
    cout << "[ + ] Массив BOOL:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "[ + ] arrBool [ " << i << " ]\t| значение: " << boolalpha << arrBool[i] << endl;
    }
    cout << "------------------------------------------" << endl;

    string arrString[10] = { "C++", "Python", "Java", "Ruby", "PHP", "JS", "C#", "Swift", "Go", "Rust" };
    cout << "[ + ] Массив STRING:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "[ + ] arrString [ " << i << " ] | значение: " << arrString[i] << endl;
    }
    cout << "------------------------------------------" << endl;

    return 0;
}
