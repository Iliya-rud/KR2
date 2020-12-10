//#include <iostream>
//#include "Complex_Coordinates.h"
#include "Complex_Vector.h"
#include "AutoTest.h"
//using namespace std;

int main(void){
    int test_res = AutoTest();
    if (test_res == 0){
        cout << "AutoTest failed!!!" << endl;
        exit(-1);
    }
    if (test_res == 1){
        cout << "AutoTest passed..." << endl;
    }

    ComplexCoordinates a1(1,3), a2(2,3), a3(1,3), a4(-1,0);//декларируем комплексные координаты
    ComplexCoordinates b1(4,1), b2(4,2), b3(2,3), b4(1,0);//декларируем комплексные координаты

    ComplexVector Vector1(4), Vector2(4);//декларация двух трёхмерных векторов. Тут используется конструктор для узнавания длины вектора
    Vector1.GetCoordinates(a1); Vector1.GetCoordinates(a2); Vector1.GetCoordinates(a3); Vector1.GetCoordinates(a4);//задаём координаты первого вектора
    Vector2.GetCoordinates(b1); Vector2.GetCoordinates(b2); Vector2.GetCoordinates(b3); Vector2.GetCoordinates(b4);//задаём координаты второго вектора

    cout << "First vector:" << endl;
    Vector1.Print();
    cout << "Second vector:" << endl;
    Vector2.Print();
    cout << "Summ First vector and second vector:" << endl;
    ComplexVector Vector3 = Vector1 + Vector2;
    Vector3.Print();
    cout << "Difference first vector and third vector:" << endl;
    ComplexVector Vector4 = Vector1 - Vector3;
    Vector4.Print();
    cout << "Scalar multiplication first vector and second vector:" << endl;
    ComplexVector Vector5 = Vector1 * Vector2;
    Vector5.Print();
    cout << "Result of increasing the dimension of the vector:" << endl;
    //Так можно увеличить размерность вектора, то есть его длинну. Добавим элемент координат в конец
    ComplexCoordinates NewCoord(-47, 288);//задекларировали и инициализировали объект класса ComplexCoordinates
    Vector5.GetCoordinates(NewCoord);//присвоили новую координату старому вектору
    Vector5.Print();//вывели
    cout << "The end!" << endl;
    cout << "SUCCESS!" << endl;
    return 0;
}
