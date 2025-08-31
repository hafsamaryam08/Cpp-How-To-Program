//  Counter-Controlled Repetition
//  Sentinel-Controlled Repetition
#include <iostream>
using namespace std;

// int main() // cc
// {
//     int grade = 0;
//     int total = 0;
//     int gradeCounter = 0;

//     while (gradeCounter < 5)
//     {
//         cout << "Enter grade: "; 
//         cin >> grade;
//         total += grade;
//         gradeCounter++;
//     }

//     float average = (float) total / 5;

//     cout << "Total of all 5 grades is " << total << endl; 
//     cout << "Class average is " << average << endl;
// }

int main() // sc
{
    int grade = 0;
    int total = 0;
    int gradeCounter = 0;

    cout << "Enter grade or -1 to quit: " ; 
    cin >> grade;

    while (grade != -1)
    {
        total += grade;
        gradeCounter++;
        cout << "Enter grade or -1 to quit: " ; 
        cin >> grade;
    }

    if (gradeCounter != 0)
    {
        float average = (float) total / gradeCounter;

        cout << "Total of all " << gradeCounter << " grades is " << total << endl;
        cout << "Class average is " << average << endl;
    }
    else
    {
        cout << "No grades were entered" << endl;
    }
}