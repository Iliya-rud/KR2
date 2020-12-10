//#include <iostream>
#include "AutoTest.h"
//#include "Complex_Coordinates.h"
#include "Complex_Vector.h"
//using namespace std;

int AutoTest() {
    ComplexCoordinates a1(1,1), a2(2,2);
    ComplexCoordinates b1(2,2), b2(3,3);

    ComplexVector v1(2), v2(2);//тут используется к
    v1.GetCoordinates(a1); v1.GetCoordinates(a2);//вызываем метод
    //v1.Print();
    v2.GetCoordinates(b1); v2.GetCoordinates(b2);//вызываем метод
    //v2.Print();
    ComplexVector t = v1 + v2;
    //t.Print();
    //тут используем перегрузку оператора индексации []   !
    if (t[0] == b2) {//сравниваем первую координату вектора с комплексным числом
        return 1;
    }
    return 0;
}
