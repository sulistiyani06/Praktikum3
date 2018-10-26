# Praktikum3

## Latihan1.cpp : Menghitung bilangan terbesar sebanyak jumlah "n"

**Alur algoritma**
1. Mendeklarasikan variabel int `a,max,n` sebagai variabel input
2. Membaca input dari keyboard `cin >> n`
3. Membandingkan nilai variabel **A** dengan variabel **max** jika **a>max**
4. Bandingkan kembali kedua variabel sebanyak jumlah **n** atau bilangan yang di input sampai menemukan hasil `a=max` maka cetaklah.
5. Print bilangan terbesar dari semua bilangan yang di inputkan.

**Flowchart Program**
![Flowchart](https://raw.githubusercontent.com/putrintans/Praktikum3/master/Latihan1/Flowchart1.png)

**code program lengkap:**
```c++
#include<iostream>

using namespace std;

int main() {
    int i=0;
    int max=0;
    int n,a;

    cout << "Masukkan jumlah bilangan: ";
    cin >> n;

    for (i;i<n;i++) {
        cout << "Masukkan bilangan ke-" << i+1 << ": ";
        cin >> a;

        if (a > max)
            max = a;
    }

    cout << "Bilangan terbesar adalah: " << max << endl;
}
```

hasilnya:
![ing](https://raw.githubusercontent.com/putrintans/Praktikum3/master/Latihan1/Hasil1.png)

## Latihan2.cpp : 

**Alur algoritma**
1. Mendeklarasikan variabel `int A,B,C` sebagai variabel input
2. Membaca input dari keyboard `cin >> A >> B >> C`
3. Membandingkan nilai variabel **A** dengan variabel **B** jika **A** lebih kecil daripada **B**
4. Bandingkan kembali variabel **B** dengan variabel **C**
5. Jika kondisi **TRUE** , Maka cetaklah bilangan secara berurutan dari yanng terkecil-terbesar yaitu **A,B,C**
6. Jika kondisi **FALSE** , bandingkan kembali variabel **A** dengan variabel **C** jika **A** lebih kecil dari **C**
7. Jika kondisi **TRUE** , Maka cetaklah bilangan secara berurutan dari yang terkecil-terbesar yaitu **A,C,B**
8. Jika kondisi **FALSE** , Maka cetaklah bilangan secara berurutan dari yang terkecil-terbesar yaitu **C,A,B**
9. Kemudian jika **A** lebih kecil dari **C**
10. Jika kondisi **TRUE** , Maka cetaklah bilangan secara berurutan dari yang terkecil-terbesar yaitu **B,A,C**
11. Jika kondisi **FAlSE** , Bandingkan kembali variabel **B** dengan variabel **C** jika **B** lebih kecil dari **C**
12. Jika kondisi **TRUE** , Maka cetaklah bilangan secara berurutan dari yang terkecil-terbesar yaitu **B,C,A**
13. Jika kondisi **FALSE** , Maka cetaklah bilangan sceara berurutan dari yang terkecil-terbesar yaitu **C,B,A**
14. Lalu, END.

**Flowchart Program**
![Flowchart](https://raw.githubusercontent.com/putrintans/Praktikum3/master/Latihan2/Flowchart2.png)

**code program lengkap:**
```c++
#include<iostream>

using namespace std;

int main(){
    int A,B,C;

    cout << "Masukkan bilangan A: "; cin >> A;
    cout << "Masukkan bilangan B: "; cin >> B;
    cout << "Masukkan bilangan C: "; cin >> C;

    if (A<B) {
        if (B<C)
            cout << "Urutan bilangan: " << A << ", " << B << ", " << C << endl;
        else {
            if (A<C)
                cout << "Urutan bilangan: " << A << ", " << C << ", " << B << endl;
            else
                cout << "Urutan bilangan: " << C << ", " << A << ", " << B << endl;
        }
    } else {
        if (A<C)
            cout << "Urutan bilangan: " << B << ", " << A << ", " << C << endl;
        else {
            if (B<C)
                cout << "Urutan bilangan: "<< B << ", " << C << ", " << A << endl;
            else
                cout << "Urutan bilangan: "<< C << ", " << B << ", " << A << endl;
        }
    }
}
```

hasilnya :
![ing](https://raw.githubusercontent.com/putrintans/Praktikum3/master/Latihan2/Hasil2.png)

## Latihan3.cpp :

**Alur algoritma**
1. Mendeklarasikan variabel `int A,B,C` sebagai variabel input
2. Membaca input dari keyboard `cin >> A >> B >> C`
3. Membandingkan nilai variabel **A** dengan variabel **B**
4. Jika sama, bandingkan kembali variabel **A** dengan variabel **C
5. Jika kondisi **TRUE** / ketiga variabel sama, Maka cetaklah **SEGITIGA SAMA SISI**
6. Jika **FALSE** / jika hanya dua yang sama, Maka cetaklah **SEGITIGA SAMA KAKI**
7. Dan jika variabel **A** sama dengan variabel **C** , jika kondisi **TRUE** maka cetaklah **SEGITIGA SAMA KAKI**
8. Jika kondisi **FALSE** samakan kembali  variabel **C** dengan variabel **B** , jika kondisi **TRUE** cetaklah  **SEGITIGA SAMA KAKI**
9. Jika kondisi **FALSE** cetaklah **SEGITIGA SEMBARANG**
10. Lalu, END.

**Flowchart Program**
![Flowchart]()

**code program lengkap:**
```C++
#include<iostream>
using namespace std;

int main()
{
    int A,B,C;
    cout<<"DATA KE-1: ";
    cin>> A;
    cout<<"DATA KE-2: ";
    cin>> B;
    cout<<"DATA KE-3: ";
    cin>> C;
    if (A==B)
    {
        if (A==C)
            cout << "Segitiga Sama Sisi";
        else
            cout << "Segitiga Sama Kaki";
    }else{
    if (A==C)
        cout << "Segitiga Sama Kaki";
    else
    {
        if (B==C)
            cout << "Segitiga Sama Kaki";
        else
            cout << "Segitiga Sembarang";
    }
    }
    }
```

hasilnya :
![ing]()
