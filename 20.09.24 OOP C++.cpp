#include<iostream>
using namespace std;

class Point // создание нового типа!!
{
private: // закрытая часть объекта - реализация, состояние объекта
    int x;
    int y;
public: // открытая часть - ИНТЕРФЕЙС объекта
    void Print() // метод класса
    {
        cout << "X: " << x << "\tY: " << y << endl;
    }
    // -----   перегрузка функции/методов (overloading) 
    void Input(int a, int b) // метод класса
    {
        x = a;
        y = b;
    }
    void Input()
    {
        x = rand() % 10; // 0-19
        y = rand() % 10;
    }

    //// ------------- методы аксессоры!
    void SetX(int _x) // сеттеры  модификаторы
    {
        x = _x;
    }
    void SetY(int _y)
    {
        y = _y;
    }
    int GetX() // геттеры   инспекторы
    {
        return x;
    }
    int GetY()
    {
        return y;
    }

};
int main()
{
    srand(time(0));
    Point a;       // переменная типа Point. Объект класса Point
    a.Input(1, 2); // вызов метода через объект
    a.Print();
    a.SetX(10);
    a.SetY(100);

    int x = a.GetX();
    cout << x << endl;
    cout << a.GetX() + a.GetY() << endl;  // cout<< 1+2 <<endl;

}