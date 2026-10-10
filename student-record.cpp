#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    string id;
    int numberOfCourses;
    double grades[10];
    double gpa;
    bool registered;
};

int main() {
    Student s;
    double total = 0;

    // Student details
    cout << "Enter student name: ";
    getline(cin, s.name);

    cout << "Enter student ID: ";
    getline(cin, s.id);

    cout << "Is the student registered? (1 = Yes, 0 = No): ";
    cin >> s.registered;

    // Course grades
    cout << "Enter number of courses (1-10): ";
    cin >> s.numberOfCourses;

    if (s.numberOfCourses < 1 || s.numberOfCourses > 10) {
        cout << "Invalid number of courses." << endl;
        return 1;
    }

    for (int i = 0; i < s.numberOfCourses; i++) {
        cout << "Enter grade point for course " << i + 1 << ": ";
        cin >> s.grades[i];

        total += s.grades[i];
    }

    // Calculate GPA
    s.gpa = total / s.numberOfCourses;

    // Display student results
    cout << "\n===== STUDENT RECORD =====" << endl;
    cout << "Name: " << s.name << endl;
    cout << "Student ID: " << s.id << endl;
    cout << "GPA: " << s.gpa << endl;

    cout << "Registration Status: ";

    if (s.registered) {
        cout << "Registered" << endl;
    } else {
        cout << "Not Registered" << endl;
    }

    cout << "Course Grades: ";

    for (int i = 0; i < s.numberOfCourses; i++) {
        cout << s.grades[i] << " ";
    }

    cout << endl;

    return 0;
}
