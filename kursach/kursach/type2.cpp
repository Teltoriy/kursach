#include "type2.h"
#include <iostream>
using namespace std;
type2::type2(double a1) {
	A = a1;
}
void type2::Get_answer() {
	cout << "������� �������� X=0" << endl;
}
void type2::show() {
	cout << "��������� "<<A<<"*x^2 = 0" << endl;
}