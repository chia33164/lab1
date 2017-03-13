#include<iostream>

using namespace std;

int main()
{
    int n ;
    cin >> n ;
    while( n != 1 && n > 1)
    {
        if( n%2 != 0)
        {
         cout << 3*n + 1 << endl;
         n = 3*n + 1;
        }
        else if( n%2 == 0)
        {
            cout << n/2 << endl;
            n = n/2 ;
        }
    }
    return 0 ;
}
