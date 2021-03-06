//#include <iostream>
#include "Complex_Coordinates.h"
//using namespace std;



ComplexCoordinates::ComplexCoordinates() {
    re = 0.0;//для зануления координат, чтобы не возникало мусора и можно было нормально работать с ними
    im = 0.0;//для зануления координат, чтобы не возникало мусора и можно было нормально работать с ними
}

ComplexCoordinates::ComplexCoordinates(double re, double im) {//конструктор для считывания комплексной координаты
    this->re = re;
    this->im = im;
}

ComplexCoordinates ComplexCoordinates::operator+(const ComplexCoordinates& arg) {// вне класса перегружаем сложение
    ComplexCoordinates result(this->re, this->im);
    result.re += arg.re;//реализация перегрузки оператора сложения для действительных координат
    result.im += arg.im;//реализация перегрузки оператора сложения для мнимых координат
    return result;
}

ComplexCoordinates ComplexCoordinates::operator-(const ComplexCoordinates& arg) {// вне класса перегружаем разность
    ComplexCoordinates result(this->re, this->im);
    result.re -= arg.re;//реализация перегрузки оператора вычитания для действительных координат
    result.im -= arg.im;//реализация перегрузки оператора вычитания для мнимых координат
    return result;
}

ComplexCoordinates ComplexCoordinates::operator*(const ComplexCoordinates& arg) {// вне класса перегружаем произведение
    ComplexCoordinates result(this->re * arg.re - this->im * arg.im, this->im * arg.re + this->re * arg.im);//процесс раскрытия скобочек комплексных координат
    return result;
}

bool ComplexCoordinates::operator==(const ComplexCoordinates& arg) {// вне класса перегружаем сравнение. Вернёт булево значение
    if (re == arg.re && im == arg.im) {//суть перегрузки
        return true;
    }
    return false;
}

ostream& operator<<(ostream& stream, const ComplexCoordinates& arg) {//перегрузка побитового сдвиг влево
    cout << arg.re << " + " << arg.im << "*i";//понадобится для вывода в консоль
    return stream;
}//
