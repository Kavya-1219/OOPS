#include <iostream>

int main() {
    double marks[4];
    double totalMarks = 0;

    std::cout << "Enter marks for four subjects:" << std::endl;
    for (int i = 0; i < 4; ++i) {
        std::cout << "Enter marks for subject " << i + 1 << ": ";
        std::cin >> marks[i];
        totalMarks += marks[i];
    }

    double aggregate = totalMarks / 4;
    std::cout << "Total marks: " << totalMarks << std::endl;
    std::cout << "Aggregate: " << aggregate << std::endl;

    char grade;
    if (aggregate > 75)
        grade = 'A';
    else if (aggregate >= 60)
        grade = 'B';
    else if (aggregate >= 50)
        grade = 'C';
    else if (aggregate >= 40)
        grade = 'D';
    else
        grade = 'F';

    std::cout << "Grade: " << grade << std::endl;

    return 0;
}

