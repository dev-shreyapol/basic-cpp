#include <iostream>
#include <conio.h> // Only needed if using getch(); otherwise, remove or comment it out.

class student {
    int roll_no;
    char name[30];

public:
    void get();
    void put();
};

// Define member functions outside the class
void student::get() {
    std::cout << "Enter roll no and name: ";
    std::cin >> roll_no >> name;
}

void student::put() {
    std::cout << "Roll No = " << roll_no << std::endl;
    std::cout << "Name = " << name << std::endl;
}

int main() {
    student s;
    s.get();
    s.put();
    getch();  // If using Turbo C++ or similar; otherwise remove this line
    return 0;
}
