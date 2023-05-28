#include "type7.h"
#include <iostream>
using namespace std;
type7::type7(double b1) {
    B = b1;
}
void type7::Get_answer() {
    cout << "Корень уравнения: x = 0" << endl;
}
void type7::show() {
    cout << "Уравнение " << B << "*x = 0" << endl;
}