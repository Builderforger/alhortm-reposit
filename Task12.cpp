#include <iostream>
#include <string>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

    string name = "Игрок";
    int totalQuestions = 8;
    int colorNum = 7; 

    int menuChoice = 0;

    cout << "---- ПРИВЕТ ТЫ ПОПАЛ НА ТЕСТ! ----" << endl;

    while (menuChoice != 4) {
        cout << "\n--- МЕНЮ ---" << endl;
        cout << "1. Начать игру" << endl;
        cout << "2. Настройки" << endl;
        cout << "3. Правила" << endl;
        cout << "4. Выйти" << endl;
        cout << "Твой выбор: ";
        cin >> menuChoice;

        if (menuChoice == 1) {
            int lives = 3;
            int score = 0;
            int currentQ = 1;
            char answer;

            cout << "\nПОЕХАЛИ! Игрок: " << name << " | Жизни: " << lives << endl;


            while (lives > 0 && currentQ <= 3) { 
                if (currentQ == 1) {
                    cout << "\n[1] Системный язык?\n A. Python  B. C++\nВаш ответ: ";
                    cin >> answer;
                    if (answer == 'B' || answer == 'b') {
                        cout << "Верно!" << endl;
                        score += 10;
                    }
                    else {
                        cout << "Мимо!" << endl;
                        lives--;
                    }
                }
                else if (currentQ == 2) {
                    cout << "\n[2] HTML это язык программирования?\n A. Да  B. Нет\nВаш ответ: ";
                    cin >> answer;
                    if (answer == 'B' || answer == 'b') {
                        cout << "Красавчик!" << endl;
                        score += 10;
                    }
                    else {
                        cout << "Ошибочка!" << endl;
                        lives--;
                    }
                }
                else if (currentQ == 3) {
                    cout << "\n[3] Основатель Microsoft?\n A. Билл Гейтс  B. Дуров\nВаш ответ: ";
                    cin >> answer;
                    if (answer == 'A' || answer == 'a') {
                        cout << "В точку!" << endl;
                        score += 10;
                    }
                    else {
                        cout << "Не-а." << endl;
                        lives--;
                    }
                }
                currentQ++;
            }

            if (lives > 0) cout << "\nПОБЕДА! Очки: " << score << endl;
            else cout << "\nТЫ ПРОИГРАЛ. Жизни кончились." << endl;

        }
        else if (menuChoice == 2) {
            cout << "1. Изменить имя\n2. Кол-во вопросов (8/10/12)\n3. Цвет (1-Синий, 2-Зеленый)\nВыбор: ";
            int s; cin >> s;
            if (s == 1) { cout << "Имя: "; cin >> name; }
            else if (s == 2) { cin >> totalQuestions; }
            else if (s == 3) { cout << "Цвет изменен (условно)!" << endl; }

        }
        else if (menuChoice == 3) {
            cout << "\nПравила просты: отвечай верно - получай очки. Ошибся - минус жизнь." << endl;
        }
    }

    cout << "Пока!" << endl;
    return 0;
}
