#include <iostream>
using namespace std;

struct cashier
{
    int item_price, qty, item_total;
    string item_name;
};

int main()
{
    system("cls");
    int i, n, item_id, total_payment;
    cashier entity[10];

    cout << "X SuperMiniMarket" << endl;
    cout << "Item List" << endl;
    cout << "1. CocaCola        (Rp.5000)" << endl;
    cout << "2. Biskuat         (Rp.10000)" << endl;
    cout << "3. Fanta           (Rp.5000)" << endl;
    cout << "4. Oreo            (Rp.9000)" << endl;
    cout << "5. Sprite          (Rp.5000)" << endl;
    cout << "6. Silver Queen    (Rp.8000)" << endl;
    cout << "7. Dairy Milk      (Rp.8000)" << endl;
    cout << "8. Indomilk        (Rp.6000)" << endl;
    cout << "9. Indomie         (Rp.3000)" << endl;
    cout << "10. Sari Roti      (Rp.12000)" << endl;

    cout << "insert how many items that you want to buy : ";
    cin >> n;
    if (n <= 10)
    {
        for (i = 1; i <= n; i++)
        {
            cout << "#"<< i <<endl;
            cout << "item id    : "; 
            cin >> item_id;
            cout << "qty        : ";
            cin >> entity[i].qty;

            if (item_id == 1)
            {
                entity[i].item_name = "CocaCola";
                entity[i].item_price = 5000;
            }
            else if (item_id == 2)
            {
                entity[i].item_name = "Biskuat";
                entity[i].item_price = 10000;
            }
            else if (item_id == 3)
            {
                entity[i].item_name = "Fanta";
                entity[i].item_price = 5000;
            }
            else if (item_id == 4)
            {
                entity[i].item_name = "Oreo";
                entity[i].item_price = 9000;
            }
            else if (item_id == 5)
            {
                entity[i].item_name = "Sprite";
                entity[i].item_price = 5000;
            }
            else if (item_id == 6)
            {
                entity[i].item_name = "Silver Queen";
                entity[i].item_price = 8000;
            }
            else if (item_id == 7)
            {
                entity[i].item_name = "Dairy Milk";
                entity[i].item_price = 8000;
            }
            else if (item_id == 8)
            {
                entity[i].item_name = "Indomilk";
                entity[i].item_price = 6000;
            }
            else if (item_id == 9)
            {
                entity[i].item_name = "Indomie";
                entity[i].item_price = 3000;
            }
            else if (item_id == 10)
            {
                entity[i].item_name = "Sari Roti";
                entity[i].item_price = 12000;
            }
            else
            {
                entity[i].item_name = " ";
                entity[i].item_price = 0;
            }
            entity[i].item_total = entity[i].item_price * entity[i].qty;
        }
        system("cls");
        for (i = 1; i <= n; i++)
        {
            cout <<i<<"."<< entity[i].item_name << " (qty : "<< entity[i].qty <<" price : "<< entity[i].item_price <<" total : "<<entity[i].item_total<<")"<< endl;
            total_payment += entity[i].item_total;
        }
        cout << "total payment: Rp." << total_payment-50;
    }
    return 0;
}
