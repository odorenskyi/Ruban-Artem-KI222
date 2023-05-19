#include <iostream>
#include <fstream>
#include <ModulesRuban.h>
#include <ctime>
#include <bitset>
#include <string>

using namespace std;

struct Dani {
    string Name;
    string Institution;
    string City;
    string Country;
    int year;
};

int main()
{
    Dani data;
    setlocale(LC_ALL,"ukr");
    ofstream OutFile("outFile.txt");
    ifstream InFile("inFile.txt");
    if(OutFile.is_open() && InFile.is_open())
    {
        cout<<"Files are open\n"<<endl;
        data.Name = "Artem";
        data.Institution = "CNTU";
        data.City = "Kropyvnytskyi";
        data.Country = "Ukraine";
        data.year = 2023;
        OutFile<<"Name : "<<data.Name<<endl;
        OutFile<<"Institution : "<<data.Institution<<endl;
        OutFile<<"City : "<<data.City<<endl;
        OutFile<<"Country : "<<data.Country<<endl;
        OutFile<<"Year of development : "<<data.year<<endl;
        OutFile<<"Ukrainian alphabet - ";
        for(char letters ='A';letters<='Z';letters++)
            OutFile<<letters<<" ";
        OutFile<<endl<<"                     ";
        for(char letters='a';letters<='z';letters++)
            OutFile<<letters<<" ";
        OutFile<<endl;
        string line;
        while(getline(InFile,line)){
                if(line.find("типленько") != string::npos ||
                   line.find("нисти") != string::npos ||
                   line.find("божа") != string::npos||
                   line.find("матінка")!= string::npos||
                   line.find("тобі")!= string::npos)
                   OutFile<<"Errors detected"<<endl;
                else
                    OutFile<<"\nNo errors were found in line"<<endl;
        OutFile.close();
        InFile.close();
        }
    }
        else
            cout<<"File isn`t opening!";

    ofstream InF("inFile.txt",std::ios::app);
    if(InF.is_open()){
        InF<<""<<"\nState symbols of Ukraine: \n"
        "1.National Anthem of Ukraine\n"
        "2.National flag of Ukraine\n"
        "3.State coat of arms of Ukraine\n";
        time_t now = time(nullptr);
        tm* local_time = localtime(&now);
        InF<<"TIME - "<<local_time->tm_hour<<":"<<local_time->tm_min<<":"<<local_time->tm_sec<<endl;
        InF.close();
    }
    else
        cout<<"Input file is not open";
    ofstream Outf("outFile.txt", std::ios::app);
    if (Outf.is_open())
    {
        Outf<<endl;
        s_calculation();
        int number;
        cout << "Enter a number: ";
        cin >> number;
        bitset<sizeof(int) * 8> binary(number);
        Outf << "\nNumber : " << number << endl;
        Outf << "binary value : " << binary << std::endl;
        Outf.close();
    }
    else
        cout << "File isn't open" << endl;
return 0;
}
