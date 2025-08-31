// break statement exiting a for statement
// break statement, when executed in a while, for, do-while or switch, 
// causes immediate exit from that statement.

#include <iostream>
using namespace std;

int main()
{
    int count;
    for (count = 0; count <= 10; count++)
    {
        if (count == 7) // if count is 7, terminate loop
        {
            break;
        }
        cout << count << " ";
    }
    cout << "\nBroke out of loop at count = " << count;
}


// continue statement terminating an iteration of a for statement
// continue statement, when executed in a while, for or do-while, 
// skips remaining statements in loop body and proceeds with next iteration of loop.

int main()
{
    for (int count = 0; count <= 10; count++)
    {
        if (count == 7) // if count is 7, skip remaining code in loop
        {
            continue;
        }
        cout << count << " ";
    }
    cout << "\nUsed continue to skip printing 7";
}