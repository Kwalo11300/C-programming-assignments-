// C++ program to convert Fahrenheit
#include <bits/stdc++.h>

using namespace std;
float Conversion(float n)
{
    return (n - 32.0) * 5.0 / 9.0;
}
int main()
{
    float n = 40;
    cout << Conversion(n);
    return 0;
}