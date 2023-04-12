#include <iostream>
#include <clocale>
#include <windows.h>
#include <cmath>
#define pi 3.14159
#include <ruban.h>
using namespace std;

int main()
{
    setlocale(LC_ALL,"ukr");
    float x1,y1,z1,a1,b1;
    cout<<"******Задача 8.2.1******"<<endl;
    system("chcp 1251");
    cout <<"Цю програму розробив Рубан Артем" << endl;
    cout<<"-----(c) All Rights Reserved-------"<<endl;
    cout<<"---------"
    "-------------"
    "-------------"<<endl;
    cout<<"******Задача 8.2.2*******"<<endl;
    cout<<"Введiть значення a1 - ";
    cin>>a1;
    cout<<"Введiть значення b1 - ";
    cin>>b1;
    bool result=a1+10>=b1;
    cout.setf(ios_base::boolalpha );
    cout<<"\nРезультат : "<<result<<endl;
    cout<<"-------------"
    "---------------"
    "---------------"<<endl;
    cout<<"******Задача 8.2.3******"<<endl;
    cout<<"Введiть значення х1 - ";
    cin>>x1;
    cout<<"Введiть значення y1 - ";
    cin>>y1;
    cout<<"Введiть значення z1 - ";
    cin>>z1;
    cout<<"Десяткова система числення -      "<<x1<<"       "<<y1<<"        "<<z1<<endl;
    cout<<"Шiстнадцяткова система числення - ";
    cout<<hex<<x1<<"         ";
    cout<<hex<<y1<<"         ";
    cout<<hex<<z1<<endl;
    cout<<"--------------------"
    "--------------------"
    "--------------------"<<endl;
    cout<<"******Завдання з використанням статичної бібліотеки*******"<<endl;
    s_calculation();
     cout<<"---------------"
    "--------------------"<<endl;
    return 0;
}
