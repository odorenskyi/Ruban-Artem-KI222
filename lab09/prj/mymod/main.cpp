#include <iostream>
#include <clocale>
#include <cmath>
#include <iomanip>
#define pi 3.14159
using namespace std;

void s_calculation(void)
{
    setlocale(LC_ALL,"");    //Локалізація даних
    /*Розв'язати задачу S=(z+2*pow(y,2)/ln(x-y))+ sqrt(pi *x)*/
    float x,y,z,S,a,b,c;
    cout<<"***************************"<<endl;
    cout<<"Введiть значення х - ";
    cin>>x;
    cout<<"Введiть значення у - ";
    cin>>y;
    cout<<"Введiть значенння z - ";
    cin>>z;
    a = z+ 2*pow(y,2);   //Замінюємо вираз z+ 2*pow(y,2) однією змінною а
    b = log10(x-y);      //Замінюємо вираз log10(x-y) змінною b
    c = sqrt(pi * x);  //Замінюємо вираз sqrt(pi * x) змінною с
     S = (a / b) + c;
    if (x<y)
        cout<<"Помилка"<<endl;
        else
            cout<<"S = "<<S<<endl;
    cout<<"*****************************\n"<<endl;
}
void wind_speed(){
setlocale(LC_ALL,"");
    float speed;
    cout<<"\n******Швидкiсть вiтру за шкалою Фудзiти******"<<endl;
    cout<<"Введiть швидкiсть вiтру (км/год) : ";
    cin>>speed;
    if (speed >=64 && speed <=116){
            cout<<"Швидкiсть вiтру(км/год)        Категорія(Шкала Фудзiти)"
            "        Частота\n";
            cout<<"        "<<speed<<"                            F0"
            "                        38,9%";
        }
    else if(speed >=117 && speed<=180){
            cout<<"Швидкiсть вiтру(км/год)        Категорія(Шкала Фудзiти)"
            "        Частота\n";
            cout<<"        "<<speed<<"                            F1"
            "                          35,6%";
    }
    else if(speed >=181 && speed<=253){
            cout<<"Швидкiсть вiтру(км/год)        Категорія(Шкала Фудзiти)"
            "        Частота\n";
            cout<<"        "<<speed<<"                            F2"
            "                          19,4%";
    }
    else if(speed >=254 && speed<=332){
            cout<<"Швидкiсть вiтру(км/год)        Категорія(Шкала Фудзiти)"
            "        Частота\n";
            cout<<"        "<<speed<<"                            F3"
            "                          %4,9";
    }
     else if(speed >=333 && speed<=418){
            cout<<"Швидкiсть вiтру(км/год)        Категорія(Шкала Фудзiти)"
            "        Частота\n";
            cout<<"        "<<speed<<"                            F4"
            "                         1,1%";
    }
    else if(speed >=419 && speed<=512){
            cout<<"Швидкiсть вiтру(км/год)        Категорія(Шкала Фудзiти)"
            "        Частота\n";
            cout<<"        "<<speed<<"                            F5"
            "                        >0,1%";
            }
}



void temperature(void){
    setlocale(LC_ALL,"");
    cout<<"*************ТЕМПЕРАТУРА ПОВIТРЯ*******************\n";
    double temp1,temp2,temp3,temp4,temp5,temp6; //Температура протягом дня
    double temp_C,temp_F; //Середня температура у Цельсіях та Фаренгейтах
    cout<<"Яка температура повiтря була в 00:00 годинi (C) : "; cin>>temp1;
    cout<<"\nЯка температура повiтря була в 04:00 годинi (C) : "; cin>>temp2;
    cout<<"\nЯка температура повiтря була в 08:00 годинi (C): "; cin>>temp3;
    cout<<"\nЯка температура повiтря була в 12:00 годинi (C): "; cin>>temp4;
    cout<<"\nЯка температура повiтря була в 16:00 годинi (C): "; cin>>temp5;
    cout<<"\nЯка температура повiтря була в 20:00 годинi (c): "; cin>>temp6;
    cout<<"***************************************************\n";
    temp_C = (temp1+temp2+temp3+temp4+temp5+temp6)/6;
    temp_F = 32+(1.8*temp_C);
    cout<<fixed<<setprecision(2)<<"Середньодобова температура у Цельсiях : "<<temp_C<<endl;
    cout<<"\nСередньодобова температура у Фаренгейтах : "<<temp_F<<endl;
    }
void number()
{

    unsigned int n;
    cout << "Введiть число вiд 0 до 65535 : ";
    cin >> n;
    int count = 0;
    if (n<0 && n>65535){
        cout<<"Помилка"<<endl;
        else if ((n & 1) == 0) {
                while ((n & 1) == 0) {
                    count++;
                    n >>= 1;
                    }
                cout<<"Кiлькiсть бiнарних нулiв : "<<count<<endl;
            }
        else {
                    while ((n & 1) == 1) {
                    count++;
                    n >>= 1;
                }
                cout<<"Кiлькiсть бiнарних одиниць : "<<count<<endl;
            }
    }
