#include <iostream>
#include <string>

class Employee {
protected:
    std::string name;
    int id;
    double salary;
public:
    void get_data() {
        std::cout << "Enter name: ";
        std::cin >> name;
        std::cout << "Enter ID: ";
        std::cin >> id;
        std::cout << "Enter salary: ";
        std::cin >> salary;
    }

    void display_data() const {
        std::cout << "Name: " << name << std::endl;
        std::cout << "ID: " << id << std::endl;
        std::cout << "Salary: " << salary << std::endl;
    }
};

class Manager : public Employee {
private:
    std::string department;
    double bonus;
public:
    void get_data() {
        Employee::get_data();
        std::cout << "Enter department: ";
        std::cin >> department;
        std::cout << "Enter bonus: ";
        std::cin >> bonus;
    }

    void display_data() const {
        Employee::display_data();
        std::cout << "Department: " << department << std::endl;
        std::cout << "Bonus: " << bonus << std::endl;
    }
};

class Engineer : public Employee {
private:
    std::string specialty;
    int hours;
public:
    void get_data() {
        Employee::get_data();
        std::cout << "Enter specialty: ";
        std::cin >> specialty;
        std::cout << "Enter hours: ";
        std::cin >> hours;
    }

    void display_data() const {
        Employee::display_data();
        std::cout << "Specialty: " << specialty << std::endl;
        std::cout << "Hours: " << hours << std::endl;
    }
};

int main() {
    Manager manager;
    Engineer engineer;

    std::cout << "Enter details for Manager:" << std::endl;
    manager.get_data();

    std::cout << "\nEnter details for Engineer:" << std::endl;
    engineer.get_data();

    std::cout << "\nDetails for Manager:" << std::endl;
    manager.display_data();

    std::cout << "\nDetails for Engineer:" << std::endl;
    engineer.display_data();

    return 0;
}

