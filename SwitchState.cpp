// Switch Statement to Count A, B, C, D and F Grades
#include <iostream>
using namespace std;

int main()
{
    int total = 0;
    int grade;
    int gradeCounter = 0;
    int aCount = 0;
    int bCount = 0;
    int cCount = 0;
    int dCount = 0;
    int fCount = 0;

    cout << "Enter grades in the range 0-100 (enter -1 to exit): ";
    cin >> grade;

    while (grade != -1)
    {
        total += grade;
        ++gradeCounter;
        
        switch (grade / 10) 
        {
            case 10:
                if (grade == 100)
                    ++aCount;
                break;
            case 9:
                ++aCount;
                break;
            case 8:
                ++bCount;
                break;
            case 7:
                ++cCount;
                break;
            case 6:
                ++dCount;
                break;
            default:
                ++fCount;
                break;
        }
        cin >> grade;
    }

    cout << "\nGrade Report:" << endl;

    if (gradeCounter != 0) 
    {
        double average = (double) total / gradeCounter;
        cout << "Total of " << gradeCounter << " grades entered: " << total << endl;
        cout << "Class average: " << average << endl;
        cout << "\nNumber of students who received each grade:" << endl;
        cout << "A: " << aCount << "\nB: " << bCount << "\nC: " << cCount << "\nD: " << dCount << "\nF: " << fCount;
    }
    else 
    {
        cout << "No grades were entered";
    }
}
