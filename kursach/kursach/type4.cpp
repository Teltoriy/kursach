#include "type4.h"
#include <iostream>
using namespace std;
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