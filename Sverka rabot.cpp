// Sverka rabot.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
#include <fstream>
#include <ctime>
#pragma hdrstop
using namespace std;

    int main()
    {
        struct student
        {
            char fam[40];
            

   
        };
        struct baza
        {
            char fam_baza[40];
            int fiz;
   
        };

        SetConsoleCP(1251);
        SetConsoleOutputCP(1251);
        setlocale(LC_ALL, "Russian");
        int k =0, n = 0,m=0;
        ifstream in_file;
        ofstream out_file;
        struct student b[150];
        struct baza c[750];
        char fam_group1[750];
        char fam_baza[750];
        int numbers[750];
        in_file.open("group.txt");
        if (in_file.is_open())
        {
            while (!in_file.eof())
            {
                in_file >> b[n].fam;
                n++;

            }
        }
        else
        {
            {
                cout << "|||||||||||||||||||||||||||||||||||" << endl;
                cout << "No file: baz2.txt" << "\n";
                cout << "|||||||||||||||||||||||||||||||||||" << endl;
            }
            cout << endl;
        }
        in_file.close();

        in_file.open("baz2.txt");

        if (in_file.is_open())
        {
            while (!in_file.eof())
            {
                in_file >> c[m].fam_baza;
                in_file >> c[m].fiz;
                m++;

            }
        }
        else
        {
            cout << "|||||||||||||||||||||||||||||||||||" << endl;
            cout << "No file: group.txt" << "\n";
            cout << "|||||||||||||||||||||||||||||||||||" << endl;
        }
        string s1, s2;
        out_file.open("file.txt", ios::out);
        if (in_file.is_open())
        {
            char  word[20], A[80], * string, * adr, B[80];
            for (int e = 0; e < n; e++)
            {
                s1 = b[e].fam;
                for (int h = 0; h < m; h++)
                {
                    s2 = c[h].fam_baza;

                    if (s1.find(s2) != string::npos)
                    {

                      out_file << c[h].fam_baza << " " << c[h].fiz << "\n";
                      cout << c[h].fam_baza << " " << c[h].fiz << "\t";
                    }


                }
                cout << endl;
            }
        }
        else
            cout << "File not Open";
	return(0);
}
 


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
