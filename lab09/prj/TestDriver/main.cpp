#include <iostream>
#include <clocale>
#include <iomanip>
#include <windows.h>
#include "myheader.h"
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    string input ;
    cout<<"Оберiть функцiю, яку бажаєте виконати (z, r, s, t) : ";
    getline(cin,input);
    char symb = input[0];
    while(symb != 'q' && symb != 'Q'){
            if (symb == 'z' || symb == 'Z')
            {
                s_calculation();
            }
            else if (symb == 'r' || symb == 'R') {
                    wind_speed();
            }
            else if (symb == 's' || symb == 'S')
                {
                    temperature();
            }
            else if (symb == 't' || symb == 'T')
            {
                number();
            }
            else
            {
                Beep(1000,500); //Звуковий сигнал
                cout<<"\nВведенно некоректний символ"<<endl;
            }
            cout<<"\nОберiть функцiю, яку бажаєте виконати (z, r, s, t) : ";
            getline(cin,input);
            symb = input[0];
    }
    return 0;
}
