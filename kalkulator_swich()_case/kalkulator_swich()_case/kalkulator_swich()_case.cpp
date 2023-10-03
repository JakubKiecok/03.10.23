#include <iostream>
using namespace std;

float dodawanie(float liczba1, float liczba2);
float odejmowanie(float liczba1, float liczba2);
float mnożenie(float liczba1, float liczba2);
void dzielenie(float liczba1, float liczba2);

int main()
{
    setlocale(LC_ALL, "");
    int menu;
    float liczba1, liczba2;
    cout << "Kalkulator z funkcją swich() case\n";
    cout << "Dodawanie = 1, Odejmowanie = 2, Mnożenie = 3. Dzielenie = 4" << endl;
    cout << "Wybierz operacje = "; cin >> menu;
    cout << "Podaj liczbę 1 = "; cin >> liczba1;
    cout << "Podaj liczbę 2 = "; cin >> liczba2;

    switch (menu)
    {
        case 1:
            cout << "Dodawanie = " << dodawanie(liczba1, liczba2) << endl;
            break;
        case 2:
            cout << "Odejmowanie = " << odejmowanie(liczba1, liczba2) << endl;
            break;
        case 3:
            cout << "Mnożenie = " << mnożenie(liczba1, liczba2) << endl;
            break;
        case 4:
            dzielenie(liczba1, liczba2);
            break;
    default:
        cout << "Nie wybrano operacji: zacznij od początku" << endl;
        break;
    }

    system("pause");
    return 0;
}

float dodawanie(float liczba1, float liczba2)
{
    return liczba1 + liczba2;
}

float odejmowanie(float liczba1, float liczba2)
{
    return liczba1 - liczba2;
}

float mnożenie(float liczba1, float liczba2)
{
    return liczba1 * liczba2;
}

void dzielenie(float liczba1, float liczba2)
{
    if (liczba2 != 0) {
        cout << "Dzielenie = " << liczba1 / liczba2 << endl;
    }
    else
    {
        cout << "Nie dziel szlachciu przez 0" << endl;
    }
}
