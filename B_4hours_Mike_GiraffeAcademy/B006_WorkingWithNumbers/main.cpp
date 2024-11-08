#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // whole numbers = int
    // decimal number = float or double

    cout << 1 << endl;
    cout << 1.23 << endl;
    cout << 5 + 7 << endl;
    cout << 5 - 7 << endl;
    cout << 5 * 7 << endl;
    double dub = 5/7;
    cout << dub << endl;

    cout << 15 % 7 << endl;

    int wnum = 5;
    double dnum = 5.5;

    wnum++;
    	
    cout << wnum << endl;

    wnum += 10;

    cout << wnum << endl;
    
    // integer math or double math

    cout << 5.5 + 9 << endl;

    cout << 5.6 + 2.2 << endl;

    // using math functions
    cout << pow(2, 5) << endl;

    cout << sqrt(35) << endl;

    cout << round(35.5) << endl;

    cout << ceil(5.5) << endl;
    cout << floor(5.5) << endl;

    // fmax(a,b) which is bigger
    cout << fmax(1,10) << endl;

    cout << fmin(1,10) << endl;


    return 0;
}
