#include <iostream>
using namespace std;



int mian()
{
    // Задание 1.
    // Пользователь вводит прибыль фирмы за 6 месяцев.
    // Нужно вычислить общую прибыль.

    const int SIZE = 6;
    int profit[SIZE];
    int total = 0;


    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter your profit for a: " << i + 1 << "Month: "; 
        cin >> profit[i];
        total += profit[i];
    }

    cout << "Profit for a month: ";
    for (int i = 0; i < SIZE; i++)
    {
        cout << profit[i] << "\t";
    }
    cout << endl;
    cout << "Total profit for 6 months: " << total << endl;
}







int main()
{
    // Задание 2.
    // Пользователь вводит массив из N чисел.
    // Нужно вывести массив в обратном порядке.

    const int SIZE = 6;
    int arr[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter element: " << i + 1 << ":";
        cin >> arr[i];
    }



    cout << "\nMassive in the usual manner: ";
    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << "\t";
    }


    cout << "\nMassive in reverse order: ";
    for (int i = SIZE -1; i >=0; i--)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}













int main()
{
    srand(time(NULL));
    //Задание 3.
    // Пользователь вводит длину сторон пятиугольника, каждая сторона заноситься в массив, необходимо  вычислить периметр пятиугольника (периметр — сумма всех сторон).

    const int SIZE = 5;
    int arr[SIZE];
    int P = 0;

    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter -> " << i + 1 << " -> ";
        cin >> arr[i];
        P += arr[i]; // 
    }
    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
    cout << "P = " << P << endl;
}