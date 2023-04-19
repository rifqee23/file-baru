#include<iostream>
using namespace std;

int main(){
    int kalkulator;
	int a, b;
	
    cout << "1. Penambahan " << endl;
    cout << "2. Pengurangan " << endl;
    cout << "3. Perkalian " << endl;
    cout << "4. Pembagian " <<endl;

    cout << "pilih menu = " ;
    cin >> kalkulator;

    switch (kalkulator)
    {
    case 1 : cin >> a >> b;
        cout << a + b; 
        break;
    case 2 : cin >> a >> b;
    cout << a - b;
        break;
    
    default:
        break;
    }
}

