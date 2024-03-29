
#include <iostream>
#include <map>

using namespace std;


float calculateCGPA(int numCoursesCompleted, int numCoursesFailed, float totalGradePoints) {
    if (numCoursesCompleted == 0) {
        return 0.0;
    }
    float cgpa = (totalGradePoints / numCoursesCompleted) - (numCoursesFailed / numCoursesCompleted);
    return cgpa;
}


float gradeToPoint(char grade) {
    switch (grade) {
        case 'S':
            return 10.0;
        case 'A':
            return 9.0;
        case 'B':
            return 8.0;
        case 'C':
            return 7.0;
        case 'F':
            return 0.0;
        default:
            return -1.0; 
    }
}

int main() {
    int numCoursesCompleted, numCoursesFailed;
    float totalGradePoints = 0.0;

    cout << "Enter the number of courses completed: ";
    cin >> numCoursesCompleted;

    cout << "Enter the number of courses failed: ";
    cin >> numCoursesFailed;

    
    for (int i = 0; i < numCoursesCompleted; ++i) {
        char grade;
        cout << "Enter the grade for course " << i + 1 << " (S, A, B, C, or F): ";
        cin >> grade;
        float gradePoints = gradeToPoint(grade);
        if (gradePoints == -1.0) {
            cout << "Invalid grade entered. Exiting program." << endl;
            return 1;
        }
        totalGradePoints += gradePoints;
    }

    
    float cgpa = calculateCGPA(numCoursesCompleted, numCoursesFailed, totalGradePoints);

    cout << "Your CGPA is: " << cgpa << endl;

    return 0;
}

