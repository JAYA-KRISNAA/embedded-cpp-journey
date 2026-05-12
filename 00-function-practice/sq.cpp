#include <iostream>
#include <cmath>
using namespace std;

int sq(int a)
{
    return pow(a, 2);
}

int main()
{
    int number;
    cin >> number;

    int result = sq(number);

    cout << "Square Number is : " << result << endl;
}