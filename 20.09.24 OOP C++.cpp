#include<iostream>
using namespace std;

class Point // �������� ������ ����!!
{
private: // �������� ����� ������� - ����������, ��������� �������
    int x;
    int y;
public: // �������� ����� - ��������� �������
    void Print() // ����� ������
    {
        cout << "X: " << x << "\tY: " << y << endl;
    }
    // -----   ���������� �������/������� (overloading) 
    void Input(int a, int b) // ����� ������
    {
        x = a;
        y = b;
    }
    void Input()
    {
        x = rand() % 10; // 0-19
        y = rand() % 10;
    }

    //// ------------- ������ ���������!
    void SetX(int _x) // �������  ������������
    {
        x = _x;
    }
    void SetY(int _y)
    {
        y = _y;
    }
    int GetX() // �������   ����������
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
    Point a;       // ���������� ���� Point. ������ ������ Point
    a.Input(1, 2); // ����� ������ ����� ������
    a.Print();
    a.SetX(10);
    a.SetY(100);

    int x = a.GetX();
    cout << x << endl;
    cout << a.GetX() + a.GetY() << endl;  // cout<< 1+2 <<endl;

}