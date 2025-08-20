#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of courses: ";
    cin >> n;

    float grade, totalGradePoints = 0, totalCredits = 0;
    int creditHours;

    for (int i = 1; i <= n; i++) {
        cout << "\nEnter grade points for course " << i << " (e.g., A=4, B=3, C=2, D=1, F=0): ";
        cin >> grade;

        cout << "Enter credit hours for course " << i << ": ";
        cin >> creditHours;

        totalGradePoints += grade * creditHours;
        totalCredits += creditHours;
    }
    
    float CGPA = totalGradePoints / totalCredits;

    cout << "\nTotal Credits = " << totalCredits << endl;
    cout << "Total Grade Points = " << totalGradePoints << endl;
    cout << "Final CGPA = " << CGPA << endl;

    return 0;
}
