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
cout << a << "+" << b << "=" << c << endl;

d = a - b;
cout << a << "-" << b << "=" <<d << endl;

e = a * b;
cout << a << "x" << b << "=" <<e << endl;

//cout << "problem line" << endl;
//this goes before the line you are unsure of to test if there is a problem
if ( b == 0 )
{// scope, similar to int main (smaller)
cout << "Error" << endl;
}
else
{
f = a / b;
};

cout << a << "/" << b << "="<< f << endl;


g = a % b;
cout << "remainer=" << g << endl;


return 0;
}
// floating point exception appears when b = 0 just because it really is an error when i divide by zero
