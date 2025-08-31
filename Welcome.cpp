#include <iostream>
using namespace std;

// Printing a line of text
int main()
{
    cout << "Welcome to c++ programming!";
}

// sum, difference, product, quotient, modulus of two integers
int main()
{
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    int sum = num1 + num2;
    cout << "\nSum: " << sum; 

    int dif = num1 - num2;
    cout << "\nDifference: " << dif;

    int pro = num1 * num2;
    cout << "\nProduct: " << pro;

    int quo = num1 / num2;
    cout << "\nQuotient: " << quo;

    int mod = num1 % num2;
    cout << "\nModulus: " << mod;
}

// Comparing integers using if statements, relational and equality operators
int main()
{
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    if (num1 == num2)
    {
        cout << num1 << " == " << num2 << endl;
    }
    else if (num1 < num2)
    {
        cout << num1 << " < " << num2 << endl;
    }
    else if (num1 > num2)
    {
        cout << num1 << " > " << num2 << endl;
    }
    else
    {
        cout << num1 << " != " << num2 << endl;
    }
}

// calculating sum, product, average, max and min of three integers
int main()
{
    int num1, num2, num3;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    int sum = num1 + num2 + num3;
    cout << "\nSum: " << sum;

    int pro = num1 + num2 + num3;
    cout << "\nProduct: " << pro;

    int avg = (num1 + num2 + num3) / 3;
    cout << "\nAverage: " << avg;

    int max, min;
    max = min = num1;

    if (num2 > max)
    {
        max = num2;
    }
    if (num3 > max)
    {
        max = num3;
    }
    cout << "\nMax number: " << max;

    if (num2 < min)
    {
        min = num2;
    }
    if (num3 < min)
    {
        min = num3;
    }
    cout << "\nMin number: " << min;
}

// even/odd
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n % 2 == 0)
    {
        cout << "Even";
    }
    else
    {
        cout << "Odd";
    }
}

// determine if first integer is a multiple of the second
int main()
{
    int n1, n2;
    cout << "Enter 1st number: ";
    cin >> n1;
    cout << "Enter 2nd number: ";
    cin >> n2;

    if (n1 % n2 == 0)
    {
        cout << "Multiple of 2nd.";
    }
    else
    {
        cout << "Not a multiple.";
    }
}