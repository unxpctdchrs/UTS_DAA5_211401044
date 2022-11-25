#include <iostream>
#include <queue>
using namespace std;


int main()
{   
    system("cls");
    //FIFO = FIRST IN FIRST OUT
    queue <int> num, num1;
    int tempnum;
    int i, n;
    cout << "masukkan banyak data : ";
    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> tempnum;
        num.push(tempnum);
    }
    num1 = num;
    cout << "angka yang anda masukkan : ";
    while (!num.empty())
    {
        cout << num.front() <<" ";            
        num.pop();
    }
    cout << endl;
    cout << "ukuran dari queue : "<< num1.size()<<endl;
    cout << "angka depan : " <<num1.front()<<endl;
    cout << "angka belakang : "<< num1.back()<<endl;
    
}