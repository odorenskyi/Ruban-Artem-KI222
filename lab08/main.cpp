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
    cout<<"******������ 8.2.1******"<<endl;
    system("chcp 1251");
    cout <<"�� �������� �������� ����� �����" << endl;
    cout<<"-----(c) All Rights Reserved-------"<<endl;
    cout<<"---------"
    "-------------"
    "-------------"<<endl;
    cout<<"******������ 8.2.2*******"<<endl;
    cout<<"����i�� �������� a1 - ";
    cin>>a1;
    cout<<"����i�� �������� b1 - ";
    cin>>b1;
    bool result=a1+10>=b1;
    cout.setf(ios_base::boolalpha );
    cout<<"\n��������� : "<<result<<endl;
    cout<<"-------------"
    "---------------"
    "---------------"<<endl;
    cout<<"******������ 8.2.3******"<<endl;
    cout<<"����i�� �������� �1 - ";
    cin>>x1;
    cout<<"����i�� �������� y1 - ";
    cin>>y1;
    cout<<"����i�� �������� z1 - ";
    cin>>z1;
    cout<<"��������� ������� �������� -      "<<x1<<"       "<<y1<<"        "<<z1<<endl;
    cout<<"�i������������ ������� �������� - ";
    cout<<hex<<x1<<"         ";
    cout<<hex<<y1<<"         ";
    cout<<hex<<z1<<endl;
    cout<<"--------------------"
    "--------------------"
    "--------------------"<<endl;
    cout<<"******�������� � ������������� �������� ��������*******"<<endl;
    s_calculation();
     cout<<"---------------"
    "--------------------"<<endl;
    return 0;
}
