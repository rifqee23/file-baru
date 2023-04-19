#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int bilbul[n];
    
     for(int i = 0; i < n; i++)
    {
       cin >> bilbul[i];
    }
    
    for(int i = n-1; i >= 0 ; i--)
    {
        cout << bilbul[i] << " ";
    }
    
    return 0;
}
