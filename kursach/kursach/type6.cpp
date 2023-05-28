#include "type6.h"
#include <iostream>
using namespace std;
type6::type6(double a1,double b1, double c1) {
    A = a1;
    B = b1;
    C = c1;
}
void type6::Get_answer() {
    double D = B * B - 4 * A * C;
    if (D < 0) {
        cout << "Уравнение не имеет действительных корней" << endl;
    }
    else {
        if (D == 0) {
            double x = ((-1) * B - sqrt(D)) / (2 * A);
            cout << "Корень уравнения: " << x << endl;
        }
        else {
            double x1 = ((-1) * B - sqrt(D)) / (2 * A);
            double x2 = ((-1) * B + sqrt(D)) / (2 * A);
            cout << "Корни уравнения: " << endl;
            cout << "X1 = " << x1 << endl << "X2 = " << x2 << endl;
        }
    }
}
void type6::show() {
    cout << "Уравнение " << A << "*x^2 + " << B << "*x + " << C << " = 0" << endl;
}
void type6::Get_answer_podbor() {
    double D = B * B - 4 * A * C;
    if (D < 0) {
        cout << "Уравнение не имеет действительных корней" << endl;
    }
    else {
        double min = abs(0 - A * (-20) * (-20) - B * (-20) - C);
        double x = -20;
        for (double i = -20; i < 20.01; i = i + 0.01) {
            double temp = abs(0 - A * (i) * (i)-B * i - C);
            if (temp < min) {
                min = temp;
                x = i;
            }
        }
        cout << "Приближенно, один из корней уравнения: " << x << endl;
    }
}