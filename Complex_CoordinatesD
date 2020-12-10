//#pragma once
#include <iostream>
using namespace std;

class ComplexCoordinates{
private:
    double re, im;//приватные поля
public:
    ComplexCoordinates();//конструктор для зануления координат, чтобы не возникало мусора
    ComplexCoordinates(double re, double im);//определение конструктора для считывания комплексной координаты 
    ComplexCoordinates operator+(const ComplexCoordinates& arg);//перегрузили оператор сложения
    ComplexCoordinates operator-(const ComplexCoordinates& arg);//перегрузили оператор вычитания
    ComplexCoordinates operator*(const ComplexCoordinates& arg);//перегрузили оператор умножения
    bool operator==(const ComplexCoordinates& arg);//перегрузили оператор сравнения
    friend ostream& operator<<(ostream& stream, const ComplexCoordinates& arg);//определили дружественную перегрузку (Побитовый сдвиг влево)
};
