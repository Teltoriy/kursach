#include "type4.h"
#include <iostream>
using namespace std;
type4::type4(double a1, double c1) {
    A = a1;
    C = c1;
}
void type4::Get_answer() {
     double k = ((-1) * C) / A;
        if (k >= 0) {
                double x1 = sqrt(k);
                double x2 = sqrt(k) * (-1);
                cout << "Корни уравнения: " << endl << "X1 = " << x1 << endl << "X2 = " << x2 << endl;
            }
        else {
                cout << "Корней нет" << endl;
            }
        }
 void type4::show() {
            cout << "Уравнение " << A << "*x^2 + " << C << " = 0" << endl;
        }
 void type4::Get_answer_podbor() {
     if ((((-1) * C) / A) < 0) {
         cout << "Корней методом подбора нет" << endl;
     }
     else {
         double min = abs(0 - A * (-20) * (-20) - C);
         double x = -20;
         for (double i = -20; i < 20.01; i = i + 0.01) {
             double temp = abs(0 - A * (i) * (i)-C);
             if (temp < min) {
                 min = temp;
                 x = i;
             }
         }
         cout << "Приближенно, один из корней уравнения: " << x << endl;
     }
 }
