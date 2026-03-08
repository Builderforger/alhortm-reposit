#include <iostream>
#include <string>

using namespace std;

int main() {
    setlocale(0, "");

    int i_1 = 10, i_2 = 20, i_3 = -5, i_4 = 100, i_5 = 0;
    cout << "i_1 = " << i_1 << " | тип: int, размер: " << sizeof(int) << " б." << endl;
    cout << "i_2 = " << i_2 << " | тип: int, размер: " << sizeof(int) << " б." << endl;
    cout << "i_3 = " << i_3 << " | тип: int, размер: " << sizeof(int) << " б." << endl;
    cout << "i_4 = " << i_4 << " | тип: int, размер: " << sizeof(int) << " б." << endl;
    cout << "i_5 = " << i_5 << " | тип: int, размер: " << sizeof(int) << " б." << endl;
    cout << "------------------------------------------------------------" << endl;

    short s_1 = 1, s_2 = 2, s_3 = 3, s_4 = 4, s_5 = 5;
    cout << "s_1 = " << s_1 << " | тип: short, размер: " << sizeof(short) << " б." << endl;
    cout << "s_2 = " << s_2 << " | тип: short, размер: " << sizeof(short) << " б." << endl;
    cout << "s_3 = " << s_3 << " | тип: short, размер: " << sizeof(short) << " б." << endl;
    cout << "s_4 = " << s_4 << " | тип: short, размер: " << sizeof(short) << " б." << endl;
    cout << "s_5 = " << s_5 << " | тип: short, размер: " << sizeof(short) << " б." << endl;
    cout << "------------------------------------------------------------" << endl;

    float f_1 = 1.1f, f_2 = 2.5f, f_3 = 3.14f, f_4 = 10.99f, f_5 = -0.5f;
    cout << "f_1 = " << f_1 << " | тип: float, размер: " << sizeof(float) << " б." << endl;
    cout << "f_2 = " << f_2 << " | тип: float, размер: " << sizeof(float) << " б." << endl;
    cout << "f_3 = " << f_3 << " | тип: float, размер: " << sizeof(float) << " б." << endl;
    cout << "f_4 = " << f_4 << " | тип: float, размер: " << sizeof(float) << " б." << endl;
    cout << "f_5 = " << f_5 << " | тип: float, размер: " << sizeof(float) << " б." << endl;
    cout << "------------------------------------------------------------" << endl;

    double d_1 = 0.123, d_2 = 12.3456, d_3 = 99.9, d_4 = -5.55, d_5 = 1.0;
    cout << "d_1 = " << d_1 << " | тип: double, размер: " << sizeof(double) << " б." << endl;
    cout << "d_2 = " << d_2 << " | тип: double, размер: " << sizeof(double) << " б." << endl;
    cout << "d_3 = " << d_3 << " | тип: double, размер: " << sizeof(double) << " б." << endl;
    cout << "d_4 = " << d_4 << " | тип: double, размер: " << sizeof(double) << " б." << endl;
    cout << "d_5 = " << d_5 << " | тип: double, размер: " << sizeof(double) << " б." << endl;
    cout << "------------------------------------------------------------" << endl;

    char c_1 = 'A', c_2 = '!', c_3 = '7', c_4 = 'z', c_5 = '#';
    cout << "c_1 = " << c_1 << " | тип: char, размер: " << sizeof(char) << " б." << endl;
    cout << "c_2 = " << c_2 << " | тип: char, размер: " << sizeof(char) << " б." << endl;
    cout << "c_3 = " << c_3 << " | тип: char, размер: " << sizeof(char) << " б." << endl;
    cout << "c_4 = " << c_4 << " | тип: char, размер: " << sizeof(char) << " б." << endl;
    cout << "c_5 = " << c_5 << " | тип: char, размер: " << sizeof(char) << " б." << endl;
    cout << "------------------------------------------------------------" << endl;

    bool b_1 = true, b_2 = false, b_3 = 1, b_4 = 0, b_5 = true;
    cout << "b_1 = " << b_1 << " | тип: bool, размер: " << sizeof(bool) << " б." << endl;
    cout << "b_2 = " << b_2 << " | тип: bool, размер: " << sizeof(bool) << " б." << endl;
    cout << "b_3 = " << b_3 << " | тип: bool, размер: " << sizeof(bool) << " б." << endl;
    cout << "b_4 = " << b_4 << " | тип: bool, размер: " << sizeof(bool) << " б." << endl;
    cout << "b_5 = " << b_5 << " | тип: bool, размер: " << sizeof(bool) << " б." << endl;

    return 0;
}
