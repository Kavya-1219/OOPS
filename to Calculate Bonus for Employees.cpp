#include <iostream>

class Person {
protected:
    double salary;
public:
    void getdata() {
        std::cout << "Enter salary: ";
        std::cin >> salary;
    }

    void displaydata() const {
        std::cout << "Salary: " << salary << std::endl;
    }

    virtual double calculate_bonus() const = 0;
};

class Admin : public Person {
public:
    double calculate_bonus() const {
        return salary + 1000;
    }
};

class Account : public Person {
public:
    double calculate_bonus() const {
        return salary * 1.1;
    }
};

class Master : public Admin, public Account {
public:
    void getdata() {
        Admin::getdata();
    }

    void displaydata() const {
        Admin::displaydata();
    }

    double calculate_bonus() {
        getdata();
        displaydata();
        return Admin::salary + Account::calculate_bonus() - Admin::salary;
    }
};

int main() {
    Master master;
    std::cout << "Bonus = " << master.calculate_bonus() << std::endl;

    return 0;
}

