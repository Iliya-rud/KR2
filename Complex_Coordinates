//#include <iostream>
#include "Complex_Vector.h"
//#include "Complex_Coordinates.h"
//using namespace std;


ComplexVector::ComplexVector() {//первый конструктор для зануления вспомогательных "счётчиков" (полей класса)
    length = 0;
    numbers = 0;
    data = nullptr;
}
ComplexVector::ComplexVector(int len) {// конструктор для определения размерности пространства (узнаем длину вектора)
    length = len;
    numbers = 0;
    data = new ComplexCoordinates[len];//статический массив заводим
}
ComplexVector::~ComplexVector() {//стразу деструктор. Правильно умираем!
    delete[] data;
}
ComplexVector::ComplexVector(const ComplexVector& arg) {//внеклассовый конструктор, принимающий на вход вектор
    length = arg.length;//узнаём длину объекта, который поступил в конструктор класса ComplexVector
    numbers = arg.numbers;//узнаём счётчик объекта класса ComplexVector, который поступил в этот конструктор класса ComplexVector
    data = new ComplexCoordinates[length];//создаём массив data длины length для хранения координат
    for (int i = 0; i < numbers; ++i) {
        data[i] = arg.data[i];//теперь массив заполнен координатами 
    }
}
ComplexVector& ComplexVector::operator=(const ComplexVector& arg) {//перегрузка оператора присваивания
    length = arg.length;
    numbers = arg.numbers;
    delete[] data;
    data = new ComplexCoordinates[length];
    for (int i = 0; i < numbers; ++i) {
        data[i] = arg.data[i];//реализуем присваивание
    }
    return *this;//разыменовали 
}
ComplexVector ComplexVector::operator+(const ComplexVector& arg) {//перегрузка оператора сложения 
    ComplexVector result = *this;//декларируем принятое текущее значение
    if (numbers != arg.numbers) {//проверка на корректность входных данных
        cout << "Error: vectors have different dimensions." << endl;
        return result;
    }
    for (int i = 0; i < numbers; ++i) {
        result.data[i] = result.data[i] + arg.data[i];//собственно складываем соответствующие координаты вектора
    }
    return result;
}
ComplexVector ComplexVector::operator-(const ComplexVector& arg) {//перегрузка оператора вычитания
    ComplexVector result = *this;//декларируем принятое текущее значение
    if (numbers != arg.numbers) {//проверка на корректность входных данных
        cout << "Error: vectors have different dimensions." << endl;
        return result;
    }
    for (int i = 0; i < numbers; ++i) {//пробегаем по счётчику и производим вычитание
        result.data[i] = result.data[i] - arg.data[i];//собственно вычитание
    }
    return result;
}
ComplexVector ComplexVector::operator*(const ComplexVector& arg) {//Перегрузка оператора умножения в классе ComplexCoordinates
    ComplexVector result = *this;//декларируем и инициализируем объект класса ComplexVector для осуществления перегрузки оператора умножения
    if (numbers != arg.numbers) {//проверяем всё ли правильно и корректно
        cout << "Error: vectors have different dimensions." << endl;
        return result;
    }
    for (int i = 0; i < numbers; ++i) {
        result.data[i] = result.data[i] * arg.data[i];//реализуем умножение с помощью вспомогительного объекта result из класса ComplexVector
    }
    return result;
}
ComplexCoordinates ComplexVector::operator[](int arg) {//перегрузка оператора[] индексации ComplexVector::operator[] из класса ComplexCoordinates
    ComplexCoordinates result;
    if (arg >= numbers || arg < 0) {//проверка на корректность входных данных
        cout << "Error: incorrect position." << endl;
    } else {
        result = data[arg];//
    }
    return result;//выдаст координату с индексом arg
}

void ComplexVector::Print() {//метод вне класса из класса ComplexVector, который выводит комплексный вектор с координатами
    if (numbers == 0) {
        cout << "Error: nothing to print." << endl;
    } else {//если длина вектора не нулевая, то выводим координаты вектора
        cout << "(";
        for (int i = 0; i < numbers - 1; ++i) {
            cout << data[i] << ", ";
        }
        cout << data[numbers - 1] << ")" << endl;
    }
}
//Метод, с помощью которого в объект класса ComplexVector мы положим координаты с соответствующим индексом numbers
void ComplexVector::GetCoordinates(const ComplexCoordinates& arg) {//метод (реализованный вне класса) из класса ComplexVector, создающий комплексные вектора
    if (numbers < length) {
        data[numbers] = arg;
        numbers++;//увеличиваем вспомогательный параметр, отвечающий за индексацию координаты на единицу
    } else {
        ComplexCoordinates* tmp = new ComplexCoordinates[numbers];//декларация временного динамического массива tmp типа ComplexCoordinates и выделение для него памяти 
        for (int i = 0; i < numbers; ++i) {
            tmp[i] = data[i];
        }
        delete[] data;
        data = new ComplexCoordinates[2*numbers];//увеличиваем вдвое, так как работаем с комплексным пространством (как извесно из линала размерность комплексного пространства в два раза больше размерности вещественного )
        length = 2*numbers;//увеличиваем вдвое
        for (int i = 0; i < numbers; ++i) {
            data[i] = tmp[i];//собственно заполнение
        }
        delete[] tmp;
        data[numbers] = arg;//заполнение последнего элемента 
        numbers++;//увеличиваем вспомогательный параметр, отвечающий за индексацию координаты на единицу
    }
}
