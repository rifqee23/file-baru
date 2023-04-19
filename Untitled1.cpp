#include<iostream>
using namespace std;
void hitungRerata() {
    int N;
    double total = 0, angka, rata_rata;
    cin >> N;
    for (int i = 0; i < N; i++) 
    {
        
        cout << "Masukkan data ke-" << i+1 << ": ";
        cin >> angka;
        total += angka;
        
       
    }
    rata_rata = total / N;
    cout << "Rata-rata: " << rata_rata << endl;
}
int main()
{
 hitungRerata();
 return 0;
}
