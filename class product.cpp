#include <iostream>
#include <string>

class Product {
private:
    std::string name;
    double price;
public:
    void get_product() {
        std::cout << "Enter product name: ";
        std::cin >> name;
        std::cout << "Enter product price: ";
        std::cin >> price;
    }

    void print_product() const {
        std::cout << "Product Name: " << name << std::endl;
        std::cout << "Product Price: " << price << std::endl;
    }
};

int main() {
    const int ARRAY_SIZE = 3; 
    Product products[ARRAY_SIZE];

    
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        std::cout << "Enter details for product " << i + 1 << ":" << std::endl;
        products[i].get_product();
    }

    
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        std::cout << "Details for product " << i + 1 << ":" << std::endl;
        products[i].print_product();
        std::cout << std::endl;
    }

    return 0;
}

