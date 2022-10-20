#include <iostream>

using namespace std;
int main()
{
    int kodeBarang, harga, qty;
    float totalharga, diskon;
    char member;

    cout << "NOTA PEMBELIAN" << endl;
    cout << "Radifa Frozen\n\n"
         << endl;

    cout
        << "Kode barang: ";
    cin >> kodeBarang;

    if (kodeBarang == 001)
    {
        cout << "Nama barang: Nugget" << endl;
        cout << "Harga: rp. 10.000" << endl;
        cout << "Qty: ";
        cin >> qty;
        cout << "Member: ";
        cin >> member;
        if (member == 'y')
        {
            harga = 10000;
            diskon = harga * qty * 0.1;
            totalharga = harga * qty - diskon;
            cout << "Diskon: " << diskon << endl;
            cout << "Total Belanja: " << totalharga;
        }
        else if (member == 't')
        {
            harga = 10000;
            cout << "Total Belanja: " << harga * qty;
        }
    }
    if (kodeBarang == 002)
    {
        harga = 15000;
        diskon = harga * qty * 0.1;
        totalharga = harga * qty - diskon;
        cout << "Nama barang: Sosis" << endl;
        cout << "Harga: rp. 15.000\n";
        cout << "Qty: ";
        cin >> qty;
        cout << "Member: ";
        cin >> member;
        if (member == 'y')
        {
            harga = 15000;
            diskon = harga * qty * 0.1;
            totalharga = harga * qty - diskon;
            cout << "Diskon: " << diskon << endl;
            cout << "Total Belanja: " << totalharga;
        }
        else if (member == 't')
        {
            harga = 15000;
            cout << "Total Belanja: " << harga * qty;
        }
    }
    if (kodeBarang == 003)
    {
        harga = 12000;
        diskon = harga * qty * 0.1;
        totalharga = harga * qty - diskon;
        cout << "Nama barang: Baso" << endl;
        cout << "Harga: rp. 12.000\n";
        cout << "Qty: ";
        cin >> qty;
        cout << "Member: ";
        cin >> member;
        if (member == 'y')
        {
            harga = 12000;
            diskon = harga * qty * 0.1;
            totalharga = harga * qty - diskon;
            cout << "Diskon: " << diskon << endl;
            cout << "Total Belanja: " << totalharga;
        }
        else if (member == 't')
        {
            harga = 12000;
            cout << "Total Belanja: " << harga * qty;
        }
    }

    return 0;
}