#include<iostream>
#include<algorithm>
#include<string>

class Student {
public:
    int rollNo;
    std::string name;
    float cgpa;

    // Constructor to initialize the data members
    Student(int rollNo, const std::string& name, float cgpa) : rollNo(rollNo), name(name), cgpa(cgpa) {}

    // Default constructor
    Student() : rollNo(0), name(""), cgpa(0.0) {}
};

// Function to compare two students based on their roll numbers
bool compareByRollNo(const Student& a, const Student& b) {
    return a.rollNo < b.rollNo;
}

// Function to search for a student based on roll number
Student* searchByRollNo(const std::vector<Student>& students, int rollNo) {
    for (auto& student : students) {
        if (student.rollNo == rollNo) {
            return &student;
        }
    }
    return nullptr; // If not found
}

int main() {
    int n;

    // Dynamically enter the number of students
    std::cout << "Enter the number of students: ";
    std::cin >> n;

    // Dynamically allocate an array of Student objects
    Student* students = new Student[n];

    // Input details for each student
    for (int i = 0; i < n; ++i) {
        std::cout << "Enter details for student " << i + 1 << ":\n";
        std::cout << "Roll No: ";
        std::cin >> students[i].rollNo;
        std::cout << "Name: ";
        std::cin.ignore(); // Ignore the newline character left in the buffer
        std::getline(std::cin, students[i].name);
        std::cout << "CGPA: ";
        std::cin >> students[i].cgpa;
    }

    // Sort the students based on roll numbers
    std::sort(students, students + n, compareByRollNo);

    // Display the sorted list of students
    std::cout << "\nSorted list of students based on Roll No:\n";
    for (int i = 0; i < n; ++i) {
        std::cout << "Roll No: " << students[i].rollNo << ", Name: " << students[i].name << ", CGPA: " << students[i].cgpa << "\n";
    }

    // Search for a student based on roll number
    int searchRollNo;
    std::cout << "\nEnter the Roll No to search: ";
    std::cin >> searchRollNo;

    Student* foundStudent = searchByRollNo(students, searchRollNo);
    if (foundStudent) {
        std::cout << "Student found!\n";
        std::cout << "Roll No: " << foundStudent->rollNo << ", Name: " << foundStudent->name << ", CGPA: " << foundStudent->cgpa << "\n";
    } else {
        std::cout << "Student not found.\n";
    }

    // Deallocate the dynamically allocated memory
    delete[] students;

 return 0;
}
