#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    char rpt;
    do
    { 
        system("clear");
    cout << "=========Informasi Rumus Luas bangun datar dan volume dari bangun ruang========= \n \n 1. Luas Bangun Datar \n 2. Volume bangun Ruang \n \n";
    cout << " ketik nomer yang ingin anda ketahui : ";
    cin >> a;
    
        switch (a)
        {
            case(1):
            cout << "\n Pilih Informasi Rumus bangun datar  \n \n 1. Persegi \n 2. Persegi panjang \n 3. Segitiga ";
            cout << " \n 4. Belah ketupat \n 5. Layang-layang \n 6. Trapesium \n 7. Lingkaran \n \n Pilih dengan angka yang ingin di ketahui rumusnya : ";
            cin >> b;
                switch (b)
                {
                    case 1:cout << "\n Rumus dari persegi yaitu S*S yang mana S merupakan Sisi persegi \n";break;
                    case 2:cout << "\n Rumus dari persegi Panjang yaitu P*L yang mana P: Panjang , L: Lebar \n";break;
                    case 3:cout << "\n Rumus dari segitiga yaitu (A*T)/2 yang mana A: Alas Segitiga , T:Tinggi Segitiga \n";break;
                    case 4:cout << "\n Rumus dari Belah Ketupat yaitu (d1*d2)/2 d1: diagonal 1 , d2: diagonal 2 \n";break;
                    case 5:cout << "\n Rumus dari layang-layang yaitu (d1*d2)/2 d1: diagonal 1 , d2: diagonal 2 \n";break;
                    case 6:cout << "\n Rumus dari Trapesium yaitu  ((A+B)*T)/2 A: Sisi Atas, B: Sisi Bawah, T: Tinggi Trapesium \n";break;
                    case 7:cout << "\n Rumus dari LIngkaran yaitu  (22/7*r*r) r: Jari-Jari lingkaran \n";break;
                    default:
                    break;
                }
            break;
            case 2:
            cout << "\n Pilih Informasi Rumus Volume Bangun Ruang \n \n 1. Kubus \n 2. Balok \n 3. Prisma Segitiga ";
            cout << " \n 4. Limas Segiempat \n 5. Tabung \n 6. Kerucut \n \n Pilih dengan angka yang ingin di ketahui rumusnya : ";
            cin >> c;
                switch (c)
                {
                    case 1:cout << "\n Rumus dari kubus yaitu S*S*S yang mana S merupakan Sisi-Sisi dari Kubusnya  \n";break;
                    case 2:cout << "\n Rumus dari persegi Panjang yaitu P*L*T yang mana P: Panjang , L: Lebar , T: Tinggi \n";break;
                    case 3:cout << "\n Rumus dari Prisma Segitiga ((A*T1)/2).T2 yang mana A: Alas Segitiga , T1:Tinggi Segitiga ,T2 : Tinggi Prisma \n";break;
                    case 4:cout << "\n Rumus dari Limas Segiempat yaitu 1/3*(S*S)*T S: Sisi Alas, T: TInggi Limas \n";break;
                    case 5:cout << "\n Rumus dari Tabung yaitu (22/7*r*r)*T r: Jari-Jari alas, T: Tinggi Tabung \n";break;
                    case 6:cout << "\n Rumus dari Trapesium yaitu 1/3(22/7*r*r)*T r: Jari-Jari alas, T: Tinggi Krucut \n";break;
                    default:
                    break;
                }
            break;
            default:
            break;
        } 
        cout << "\n apakah anda ingin mengulang ke menu awal? (Y/N) : ";
        cin >> rpt;
    }
        while (rpt == 'y');
        cout << " \n  =============TERIMAKASIH TELAH MENGGUNAKAN JASA PENGINGAT INI==============="<< endl ;
        
    return 0;
}
