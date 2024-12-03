#include <iostream>
using namespace std;
#define ll long long int
int main()
{
    double num1, num2, num3;
    cin >> num1 >> num2 >> num3;

    double result = num1 * (num2 / num3);// to pass 3rd testcase of codeforces and it makes the calculation easier and doesn't bother due to the precision 

    long long myNumber = result;
    double myRes = result - myNumber;

    if (myRes > 0)
    {
        cout << "double" << endl;
    }
    else if (myNumber <= 2147483647)
    {
        cout << "int" << endl;
    }
    else
    {
        cout << "long long" << endl;
    }
    return 0;
}
