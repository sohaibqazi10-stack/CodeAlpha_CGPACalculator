#include <iostream>
using namespace std;
int main()
{
    int courses;
    int credits;
    int totalcredits = 0;
    float gradepoints;
    float totalpoints = 0;
    float previusCredits, previusPoints;

    char grade;
    cout << "Enter number of courses: ";
    cin >> courses;
    for (int i = 1; i <= courses; i++)
    {
        cout << "\nCourse" << i << endl;
        cout << "Enter Grade (A/B/C/D/F):";
        cin >> grade;
        cout << "Enter Credit hours:";
        cin >> credits;
        if (grade == 'A' || grade == 'a')
            gradepoints = 4.0;
        else if (grade == 'B' || grade == 'b')
            gradepoints = 3.0;
        else if (grade == 'C' || grade == 'c')
            gradepoints = 2.0;
        else if (grade == 'D' || grade =='d')
            gradepoints = 1.0;
        else if (grade == 'F' || grade == 'f')
            gradepoints == 0.0;
        else
        {
            cout << "Invalid grade!" << endl;
            return 0;
        }
        totalcredits += credits;
        totalpoints += gradepoints * credits;
        cout << "Grade:" << grade;
        cout << "\nGrade Points:" << gradepoints << endl;
    }
    float gpa = totalpoints / totalcredits;
    cout << "\nSemester GPA:" << gpa << endl;
    cout << "\nEnter Previous completed credit hours:";
    cin >> previusCredits;
    cout << "\nEnter previous total grade points";
    cin >> previusPoints;
    float cgpa = (totalpoints + previusPoints) / (totalcredits + previusCredits);
    cout << "\nFinal CGPA: " << cgpa << endl;
    return 0;
}
