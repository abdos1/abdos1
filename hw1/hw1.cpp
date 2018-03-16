#include<iostream>
//hw1
int main()
{
using namespace std;

int a,b,c, d, e, f, g;
cout << "Enter first number:" << endl;
cin >> a;

cout << "Enter second number:" << endl;
cin >> b;

c = a + b;
cout << c << endl;

d = a - b;
cout << d << endl;

e = a * b;
cout << e << endl;

if ( b == 0 )
{
cout << "Error" << endl;
}
else
{
f = a / b;
};

cout << f << endl;


g = a % b;
cout << g << endl;


return 0;
}
