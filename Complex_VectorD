//#pragma once
//#include <iostream>
#include "Complex_Coordinates.h"
//using namespace std;

class ComplexVector {
private:
    int length;//размерность пространства
    int numbers;// счетчик для координат 
    ComplexCoordinates* data;//декларация динамического массива data типа ComplexCoordinates для хранения в нём координат вектора
public:
    ComplexVector();//определили конструктор ComplexVector();
    ComplexVector(int len);//определили конструктор ComplexVector(int len);
    ~ComplexVector();//определили деструктор для правильной смерти 
    ComplexVector(const ComplexVector& arg);//определили конструктор ComplexVector(const ComplexVector& arg);

    ComplexVector& operator=(const ComplexVector& arg);//определение перегрузки оператора =
    ComplexVector operator+(const ComplexVector& arg);//определение перегрузки оператора +
    ComplexVector operator-(const ComplexVector& arg);//определение перегрузки оператора -
    ComplexVector operator*(const ComplexVector& arg);
    ComplexCoordinates operator[](int pos);//определение перегрузки оператора [] индексации (понадобится в автотесте)
    void Print();//определение метода вывода
    void  GetCoordinates(const ComplexCoordinates& arg);// определение метода, с помощью которого в объект класса ComplexVector мы положим координаты
};
