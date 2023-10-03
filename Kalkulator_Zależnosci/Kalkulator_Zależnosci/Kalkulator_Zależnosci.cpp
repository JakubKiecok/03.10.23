#include <iostream>
#include <math.h>
using namespace std;

float y1(float a);
double y2(float a);
float y3(float a, float b);
void y4(float a, float b);

int main()
{   
    setlocale(LC_ALL, "");
    int menu;
    float a, b;
    cout << "Kalkulator zależności\n";
    cout << "Y1 = 1, Y2 = 2, Y3 = 3, Y4 = 4" << endl; 
    cout << "Podaj funkcje ktora chcesz wykonac = "; cin >> menu;


    switch (menu)
    {
    case 1:
        cout << "Podaj a = "; cin >> a;
        cout << "a do potęgi 2 = " << y1(a) << endl;
        break;
    case 2:
        cout << "Podaj a = "; cin >> a;
        cout << "pierwiastek z liczby a = " << y2(a) << endl;
        break;
    case 3:
        cout << "Podaj a = "; cin >> a;
        cout << "Podaj b = "; cin >> b;
        cout << "a + b / a * b = " << y3(a, b) << endl;
        break;
    case 4:
        cout << "Podaj a = "; cin >> a;
        cout << "Podaj b = "; cin >> b;
        y4(a, b);
        break;
    default:
        cout << "Nie wybrano opcji, zacznij od początku";
        break;
    }

    system("pause");
    return 0;
}

float y1(float a)
{
    return pow(a, 2);
}

double y2(float a)
{
    return sqrt(a);
}

float y3(float a, float b)
{
    return (a + b)/(a * b);
}

void y4(float a, float b)
{
    if (a != 0)
    {
        cout << "(a * b - b * a) / a = " <<(a * b - b * a) / a;
    }
    else
    {
        cout << "Nie dziel szlachcicu przez 0";
    }
}