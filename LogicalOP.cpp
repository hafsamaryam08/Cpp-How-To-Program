#include <iostream>
using namespace std;

int main()
{
    cout << boolalpha << "\nLogical AND (&&)" << endl;
    cout << "true && true:\t" << (true && true) << endl;
    cout << "true && false:\t" << (true && false) << endl;
    cout << "false && true:\t" << (false && true) << endl;
    cout << "false && false:\t" << (false && false) << endl;

    cout << "\nLogical OR (||)" << endl;
    cout << "true || true:\t" << (true || true) << endl;
    cout << "true || false:\t" << (true || false) << endl;
    cout << "false || true:\t" << (false || true) << endl;
    cout << "false || false:\t" << (false || false) << endl;

    cout << "\nLogical NOT (!)" << endl;
    cout << "!true:\t" << (!true) << endl;
    cout << "!false:\t" << (!false) << endl;
}    
