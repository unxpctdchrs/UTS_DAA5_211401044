#include <iostream>
#include<string>
#include <algorithm>
using namespace std;

struct  datamhs{
    string nama;
    int nim;
};


int main()
{
    system("cls");
    int i, n, x;
    datamhs mahasiswa[150];
    cout << "masukkan banyak data : ";
    cin >> n;
    if (n <= 150){
        for(i=1; i<= n; i++)
        {
            cout <<"data -"<< i <<endl;
            cout << "nama : "; cin >> mahasiswa[i].nama;
            cout << "nim : "; cin >> mahasiswa[i].nim;
        }
        // sort
        for (int i = 1; i < n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                if (mahasiswa[i].nim > mahasiswa[j].nim)
                {
                    swap(mahasiswa[i], mahasiswa[j]);
                }
            }
        }
        system("cls");
        for(i=1; i<= n; i++)
        {
            cout <<"data -"<< i <<endl;
            cout << "nama : "<< mahasiswa[i].nama<<endl;
            cout << "nim : " << mahasiswa[i].nim<<endl;
        }
    }
}