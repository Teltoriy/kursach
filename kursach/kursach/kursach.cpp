#include <iostream>
#include <string>
#include "type1.h"
#include "type2.h"
#include "type3.h"
#include "type4.h"
#include "type5.h"
#include "type6.h"
#include "type7.h"
#include "type8.h"

using namespace std;
void print_menu() {
    system("cls");
    cout << "Вас приветствует программа для решения квадратных уравнений." << endl;
    cout << "Для работы с программой Вам придется ввести 3 коэффициента(a, b и c соответственно)." << endl;
    cout << "Для того чтобы перейти к решению уравнений нажмите клавишу 1." << endl << "Если вы хотите узнать о типах квадратных уравнений нажмите клавишу 2." << endl;
    cout << "Если Вы хотите узнать о некоторых методах решения квадратных уравнений нажмите 3" << endl;
    cout << "Если вы хотите закрыть программу нажмите кнопку 4"<<endl;
    cout << "Выберете пункт меню: ";

}
int get_variant(int count) {
    int variant;
    string s; // строка для считывания введённых данных
    getline(cin, s); // считываем строку

    // пока ввод некорректен, сообщаем об этом и просим повторить его
    while (sscanf_s(s.c_str(), "%d", &variant) != 1 || variant < 1 || variant > count) {
        cout << "Неверный пункт меню. Вам необходимо выбрать корректный пункт меню: "; // выводим сообщение об ошибке
        getline(cin, s); // считываем строку повторно
    }

    return variant;
}
void urav() {
    string input;
    double A, B, C;
    char ch;
    do {
        system("cls");
        while (true) {
            cout << "Введите коэффициент А: ";
            cin >> input;
            try {
                A = stod(input);
                break;
            }
            catch (const invalid_argument& e) {
                cout << "Ошибка! a должно быть числом." << endl;
            }
        }
        while (true) {
            cout << "Введите коэффициент B: ";
            cin >> input;
            try {
                B = stod(input);
                break;
            }
            catch (const invalid_argument& e) {
                cout << "Ошибка! B должно быть числом." << endl;
            }
        }
        while (true) {
            cout << "Введите коэффициент C: ";
            cin >> input;
            try {
                C = stod(input);
                break;
            }
            catch (const invalid_argument& e) {
                cout << "Ошибка! C должно быть числом." << endl;
            }
        }
        if (A == 0 && B == 0 && C == 0) {
            type1 eq1;
            eq1.show();
            eq1.Get_answer();
        }
        else if (A != 0 && B == 0 && C == 0) {
            type2 eq2(A);
            eq2.show();
            eq2.Get_answer();
        }
        else if (A == 0 && B == 0 && C != 0) {
            type3 eq3(C);
            eq3.show();
            eq3.Get_answer();
        }
        else if (A != 0 && B == 0 && C != 0) {
            type4 eq4(A, C);
            eq4.show();
            eq4.Get_answer();
            eq4.Get_answer_podbor();
        }
        else if (A == 0 && B != 0 && C != 0) {
            type5 eq5(B, C);
            eq5.show();
            eq5.Get_answer();
            eq5.Get_answer_podbor();
        }
        else if (A != 0 && B != 0 && C != 0) {
            type6 eq6(A, B, C);
            eq6.show();
            eq6.Get_answer();
            eq6.Get_answer_podbor();
        }
        else if (A == 0 && B != 0 && C == 0) {
            type7 eq7(B);
            eq7.show();
            eq7.Get_answer();
        }
        else if (A != 0 && B != 0 && C == 0) {
            type8 eq8(A, B);
            eq8.show();
            eq8.Get_answer();
        }
        cout << "Желаете посчитать еще одно уравнение? (y/n): ";
        cin >> ch;
    } while (ch == 'y' || ch == 'Y');

}
void question() {
    system("cls");
    cout << "В зависимости от значений, которые могут принимать коэффициенты квадратного уравнения, можно выделить восемь типов квадратных уравнений" << endl;
    cout << "1. 0=0" << endl << "2. Ax^2=0" << endl << "3. C=0" << endl << "4. Ax^2+C=0" << endl << "5. Bx+c=0" << endl << "6. Ax^2+Bx+C=0" << endl << "7. Bx=0" << endl << "8. Ax^2+Bx=0" << endl;
    cout << "Данная программа оперирует перечисленными выше типами квадратных уравнений при нахождении их корней." << endl;
    system("pause");
}
void metods() {
    system("cls");
    cout << "Для решения квадратных уравнений используются различные методы. Выбор метода зависит от типа квадратного уравнения." << endl << endl;
    cout << "1. Выделение полного квадрата." << endl << "2. Разложение на множители" << endl << "3. Использование дискриминанта " << endl << "4. Теорема Виета " << endl<<endl;
    cout << "При нулевом коэффициенте a уравнение упрощается, и его можно решить как обычное уравнение первой степени путем выражения неизвестного." << endl << endl;
    cout << "Используя ресурсы вычислиельной машины, можно находить корни уравнений (в том числе квадратных) методом подбора. Для этого нужно определить интервал, в котором будет выполняться поиск корня, установить шаг и проверять все значения многочлена уравнения в данном интервале с установленным шагом. Для человека такая задача является более трудоемкой и ресурсозатратной, чем для компьютера."<< endl;
    system("pause");
}

int main()
{
    setlocale(LC_ALL, "Russian");
    system("color F0"); 
    int variant;
    do {
        print_menu();
        variant = get_variant(4);
        switch (variant) {
        case 1:
            urav();
            break;
        case 2:
            question();
            break;
        case 3:
            metods();
            break;
        }
        

    } while (variant != 4);
    return 0;
}
