#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    //LIFO (LAST IN FIRST OUT)
    stack <string> kalimat;
    string kata, yno;
    int i;

    restart:
        system("cls");

        cout << "masukkan memo hari ini : ";
        cin.ignore();
        getline(cin, kata);
        kalimat.push(kata);
        
        cout << "memo terakhir anda adalah : " << kalimat.top() << endl;
        cout << "ingin menggantinya? : ";
        cin >> yno;

        restart2:
        if ((yno == "yes") || (yno == "y"))
        {
            goto restart;
        }
        else if ((yno == "no") || (yno == "n"))
        {
            exit;
        }
        else
        {
            cout << "argumen yang anda masukkan tidak dikenali, silahkan masukkan ulang : ";
            cin >> yno;
            goto restart2;
        }
    return 0;
}