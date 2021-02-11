#include <iostream>
#include <cmath>

using namespace std;

void PrimeFactors (int x,int y)
{
    if (x < 2)
        return;
    if (x % y == 0)
    {
        cout << y << " ";
        PrimeFactors (x / y, y);
    }
    else
        PrimeFactors (x, y + 1);
}

int main(){
    int x;

    cin >> x;

    PrimeFactors(x, 2);

    return 0;
}