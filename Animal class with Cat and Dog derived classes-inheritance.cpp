#include <iostream>
#include <string>
using namespace std;

class Animal {
protected:
    string name;
    string species;
    int age;
public:
    Animal(string n, string sp, int a) : name(n), species(sp), age(a) {}

    // Getter methods
    string getName() const { return name; }
    string getSpecies() const { return species; }
    int getAge() const { return age; }
};

class Cat : public Animal {
private:
    string color;
    string breed;
public:
    Cat(string n, string sp, int a, string c, string b) : Animal(n, sp, a), color(c), breed(b) {}

    // Getter methods
    string getColor() const { return color; }
    string getBreed() const { return breed; }
};

class Dog : public Animal {
private:
    int weight;
    string breed;
public:
    Dog(string n, string sp, int a, int w, string b) : Animal(n, sp, a), weight(w), breed(b) {}

    // Getter methods
    int getWeight() const { return weight; }
    string getBreed() const { return breed; }
};

int main() {
    Cat cat("Whiskers", "Felis catus", 3, "Gray", "Siamese");
    Dog dog("Buddy", "Canis lupus familiaris", 5, 25, "Labrador Retriever");

    cout << "Cat Details:" << endl;
    cout << "Name: " << cat.getName() << ", Species: " << cat.getSpecies() << ", Age: " << cat.getAge() << endl;
    cout << "Color: " << cat.getColor() << ", Breed: " << cat.getBreed() << endl;

    cout << "\nDog Details:" << endl;
    cout << "Name: " << dog.getName() << ", Species: " << dog.getSpecies() << ", Age: " << dog.getAge() << endl;
    cout << "Weight: " << dog.getWeight() << " lbs, Breed: " << dog.getBreed() << endl;

    return 0;
}

