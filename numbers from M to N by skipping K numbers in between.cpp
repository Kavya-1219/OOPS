#include <iostream>

class Number {
protected:
    int value;
public:
    Number(int val) : value(val) {}
    virtual void print() const = 0; 
};

class Skipper : public Number {
private:
    int skip;
    int end;
public:
    Skipper(int start, int end, int skip) : Number(start), skip(skip), end(end) {}
    void print() const {
        int num = value;
        while (num <= end) {
            std::cout << num << " ";
            num += skip;
        }
        std::cout << std::endl;
    }
};

int main() {
    int M = 50;
    int N = 100;
    int K = 7;

    Skipper skipper(M, N, K);
    skipper.print();

    return 0;
}

