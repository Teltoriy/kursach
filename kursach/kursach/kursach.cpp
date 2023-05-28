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
int main()
{
    setlocale(LC_ALL, "Russian");
    system("color F0");
    double A, B, C;
    char ch;
    string input;
    do {
        while (true) {
            cout << "Введите коэффициент А";
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
            cout << "Введите коэффициент B";
            cin >> input;;
            try {
                B = stod(input);
                break;
            }
            catch (const invalid_argument& e) {
                cout << "Ошибка! B должно быть числом." << endl;
            }
        }
        while (true) {
            cout << "c = Введите коэффициент C";
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
    return 0;
}
