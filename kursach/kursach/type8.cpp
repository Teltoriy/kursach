#include "type8.h"
#include <iostream>
using namespace std;
type8::type8(double a1, double b1) {
    A = a1;
    B = b1;
}
void type8::Get_answer() {
    double x = ((-1) * B) / A;
    cout << "Корни уравнения: " << endl;
    cout << "X1 = 0" << endl << "X2 = " << x << endl;
}
void type8::show() {
    cout << "Уравнение " << A << "*x^2 + " << B << "*x = 0 " << endl;
}
