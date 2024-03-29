#include <iostream>

int main() {
    try {
       
    }
    catch (const std::exception& e) {
        std::cerr << "Standard exception: " << e.what() << std::endl;
    }
    catch (int e) {
        std::cerr << "Integer exception: " << e << std::endl;
    }
    catch (...) {
        std::cerr << "Some other exception" << std::endl;
    }

    return 0;
}

