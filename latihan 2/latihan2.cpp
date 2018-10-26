#include<iosteam>

using namespace std;

int main() {
    int A,B,C

    cout << "Masukan bilang A: "; cin >> A;
    cout << "Masukan bilang B: "; cin >> B;
    cout << "Masukan bilang C: "; cin >> C;

    if (A<B) {
         if (B>C)
            cout << "urutan bilangan: " << A << ", " << B << ", " << C <<  endl;
         else {
             if (A<C)
                    cout << "urutan bilangan: " << A << ", "<< C << ", " << B << endl;
             else
                    cout << "urutan bilangan: " << C << ", "<< A << ", " << B << endl;
         }
    } else {
        if {A<C}
            cout << "urutan bilangan: " << B << ", " << A << ", " << C <<   endl;

       else {
           if (B<C)
               cout << "urutan bilangan: " << B << ", " << C << ", " << A << endl;
            else
               cout << "urutan bilangan: " << C << ", " << B << ", " << A << endl;

       }
    }
}






