#include <iostream>
using namespace std;

// Counter-controlled repetition with while statement
int main()
{
    int i = 1;
    while (i <= 10)
    {
        cout << i << " ";
        i++;
    }
}

// Counter-controlled repetition with for statement
int main()
{
    for (int i = 1; i <= 10; i++)
    {
        cout << i << " ";
    }
}

// Summing the Even Integers from 2 to 20
int main()
{
    int sum = 0;
    for (int i = 2; i <= 20; i += 2)
    {
        sum += i;
    }
    cout << sum;
}

// do-while repetition statement
int main()
{
    int i = 1;
    do
    {
        cout << i << " ";
        i++;
    } while (i <= 10);  
}
