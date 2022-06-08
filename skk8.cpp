#include <iostream>
using namespace std;

class Studi {
   private:
    int a[5][2];
    int total[5];
    int hasil;

   public:
    void input();
    void proses();
    void output();
};

void Studi::input() {
    for (int i = 0; i < 5; i++) {
        cout<<"Masukkan stok : ";
        cin>>a[i][0];
    }
    for (int i = 0; i < 5; i++) {
        cout<<" Masukkan harga : ";
        cin>>a[i][1];
    }
}

void Studi::proses() {
    for (int i = 0; i < 5; i++) {
        total[i] = a[i][0] * a[i][1];
    }
    for (int i = 0; i < 5; i++) {
        hasil = hasil + total[i];
    }
    cout << "==========================================\n";
    cout << "Nama barang |  Stok   |  Harga   | Total  |";
    cout << "==========================================\n";
    cout << "Logitech\t";
    for (int i = 0; i < 2; i++) {
        cout << a[0][i] << "\t";
    }
    cout << total[0];
    cout << "\nMicrosoft\t";
    for (int i = 0; i < 2; i++) {
        cout << a[1][i] << "\t";
    }
    cout << total[1];
    cout << "\nApple\t\t";
    for (int i = 0; i < 2; i++) {
        cout << a[2][i] << "\t";
    }
    cout << total[2];
    cout << "\nPhilips\t\t";
    for (int i = 0; i < 2; i++) {
        cout << a[3][i] << "\t";
    }
    cout << total[3];
    cout << "\nDell\t\t";
    for (int i = 0; i < 2; i++) {
        cout << a[4][i] << "\t";
    }

    cout << total[5];
    cout << "\nTotal penjualan keseluruhan "
         << "\t" << hasil;
    cout << "\n==========================================\n";
}
void Studi::output(){
	cout << "==========================================\n";
    cout << "Nama barang\tStok\tHarga\tTotal\n";
    cout << "==========================================\n";
    cout << "Logitech\t";
    for (int i = 0; i < 2; i++) {
        cout << a[0][i] << "\t";
    }
    cout << total[0];
    cout << "\nMicrosoft\t";
    for (int i = 0; i < 2; i++) {
        cout << a[1][i] << "\t";
    }
    cout << "\nApple\t";
    for (int i = 0; i < 2; i++) {
        cout << a[0][i] << "\t";
    }
    cout << total[0];
    cout << "\nPhilips\t";
    for (int i = 0; i < 2; i++) {
        cout << a[1][i] << "\t";
    }
    cout << "\nDell\t";
    for (int i = 0; i < 2; i++) {
        cout << a[1][i] << "\t";
    }
}
int main(){
	Studi run;
	run.input();
	cout<<endl;
	run.proses();
	cout<<endl;
	run.output();
	}
