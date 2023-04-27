#include <iostream>
#include <clocale>
#include <cmath>
#include <iomanip>
#define pi 3.14159
using namespace std;

void s_calculation(void)
{
    setlocale(LC_ALL,"");    //���������� �����
    /*����'����� ������ S=(z+2*pow(y,2)/ln(x-y))+ sqrt(pi *x)*/
    float x,y,z,S,a,b,c;
    cout<<"***************************"<<endl;
    cout<<"����i�� �������� � - ";
    cin>>x;
    cout<<"����i�� �������� � - ";
    cin>>y;
    cout<<"����i�� ��������� z - ";
    cin>>z;
    a = z+ 2*pow(y,2);   //�������� ����� z+ 2*pow(y,2) ���� ������ �
    b = log10(x-y);      //�������� ����� log10(x-y) ������ b
    c = sqrt(pi * x);  //�������� ����� sqrt(pi * x) ������ �
     S = (a / b) + c;
    if (x<y)
        cout<<"�������"<<endl;
        else
            cout<<"S = "<<S<<endl;
    cout<<"*****************************\n"<<endl;
}
void wind_speed(){
setlocale(LC_ALL,"");
    float speed;
    cout<<"\n******�����i��� �i��� �� ������ ����i��******"<<endl;
    cout<<"����i�� �����i��� �i��� (��/���) : ";
    cin>>speed;
    if (speed >=64 && speed <=116){
            cout<<"�����i��� �i���(��/���)        ��������(����� ����i��)"
            "        �������\n";
            cout<<"        "<<speed<<"                            F0"
            "                        38,9%";
        }
    else if(speed >=117 && speed<=180){
            cout<<"�����i��� �i���(��/���)        ��������(����� ����i��)"
            "        �������\n";
            cout<<"        "<<speed<<"                            F1"
            "                          35,6%";
    }
    else if(speed >=181 && speed<=253){
            cout<<"�����i��� �i���(��/���)        ��������(����� ����i��)"
            "        �������\n";
            cout<<"        "<<speed<<"                            F2"
            "                          19,4%";
    }
    else if(speed >=254 && speed<=332){
            cout<<"�����i��� �i���(��/���)        ��������(����� ����i��)"
            "        �������\n";
            cout<<"        "<<speed<<"                            F3"
            "                          %4,9";
    }
     else if(speed >=333 && speed<=418){
            cout<<"�����i��� �i���(��/���)        ��������(����� ����i��)"
            "        �������\n";
            cout<<"        "<<speed<<"                            F4"
            "                         1,1%";
    }
    else if(speed >=419 && speed<=512){
            cout<<"�����i��� �i���(��/���)        ��������(����� ����i��)"
            "        �������\n";
            cout<<"        "<<speed<<"                            F5"
            "                        >0,1%";
            }
}



void temperature(void){
    setlocale(LC_ALL,"");
    cout<<"*************����������� ���I���*******************\n";
    double temp1,temp2,temp3,temp4,temp5,temp6; //����������� �������� ���
    double temp_C,temp_F; //������� ����������� � ������� �� �����������
    cout<<"��� ����������� ���i��� ���� � 00:00 �����i (C) : "; cin>>temp1;
    cout<<"\n��� ����������� ���i��� ���� � 04:00 �����i (C) : "; cin>>temp2;
    cout<<"\n��� ����������� ���i��� ���� � 08:00 �����i (C): "; cin>>temp3;
    cout<<"\n��� ����������� ���i��� ���� � 12:00 �����i (C): "; cin>>temp4;
    cout<<"\n��� ����������� ���i��� ���� � 16:00 �����i (C): "; cin>>temp5;
    cout<<"\n��� ����������� ���i��� ���� � 20:00 �����i (c): "; cin>>temp6;
    cout<<"***************************************************\n";
    temp_C = (temp1+temp2+temp3+temp4+temp5+temp6)/6;
    temp_F = 32+(1.8*temp_C);
    cout<<fixed<<setprecision(2)<<"�������������� ����������� � �����i�� : "<<temp_C<<endl;
    cout<<"\n�������������� ����������� � ����������� : "<<temp_F<<endl;
    }
void number()
{

    unsigned int n;
    cout << "����i�� ����� �i� 0 �� 65535 : ";
    cin >> n;
    int count = 0;
    if (n<0 && n>65535){
        cout<<"�������"<<endl;
        else if ((n & 1) == 0) {
                while ((n & 1) == 0) {
                    count++;
                    n >>= 1;
                    }
                cout<<"�i���i��� �i������ ���i� : "<<count<<endl;
            }
        else {
                    while ((n & 1) == 1) {
                    count++;
                    n >>= 1;
                }
                cout<<"�i���i��� �i������ ������� : "<<count<<endl;
            }
    }
