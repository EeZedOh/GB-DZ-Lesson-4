#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    //Задание №1
    {
        int a, b;
        repit:
        cout << "Введите чисто №1: \n";
        cin >> a;
        cout << "Введите чисто №2: \n";
        cin >> b;

        if (a + b >= 10 && a + b <= 20)
        {
            cout << "Правда\n";
        }
        else
        {
            cout << "Ложь, повторите попытку\n";
            goto repit;
        }
    }

    //Задание №2
    {
        int a = 1, b = 9;
        cout << "Начало задания №2\n";
        if ((a == 10 && b == 10) || (a + b) == 10)
        {
            cout << "Правда\n";
        }
        else
        {
            cout << "Ложь\n";
        }
    }
   
    //Задание №3
    {
        cout << "Это список всех нечетных чисел от 1 до 50: \n";
        int i = 1;
        do 
        {
            if (i % 2 != 0) 
            {
                cout << i << ", ";
            }
            i++;
            
        } while (i <= 50);
    }

    //Задание №4
    {
        int n;
        n:
        cout << "\nВедите число: ";
        cin >> n;

        for (int i = 2; i < sqrt(n); i++) {
            if (n % i == 0) {
                cout << "Не простое\n";
                goto n;
            }
        }
        cout << "Простое\n";
    }

   //Задание №5

   {
        int god;
        cout << "Ведите год до (3000-ого): ";
        god:
        cin >> god;
        
        if (god > 0 && god <= 3000)
        {
            if (god % 4 == 0 && god % 100 != 0 || god % 400 == 0)
            {
                cout << "Веденый год высокосный\n";
            }
            else
            {
                cout << "Веденный год не высокосный\n";
                goto god;
            }
        }
   }


   return 0;
    
}
