#include <iostream>
#include <string>
#include <stack>

class Book {
private:
    int bookID;
    std::string name;
public:
    Book(int id, const std::string& bookName) : bookID(id), name(bookName) {}
    int getID() const { return bookID; }
    const std::string& getName() const { return name; }
};

class User {
private:
    int regNo;
    std::string name;
public:
    User(int reg, const std::string& userName) : regNo(reg), name(userName) {}
    int getRegNo() const { return regNo; }
    const std::string& getName() const { return name; }
};

int main() {
    std::stack<Book> bookStack;
    std::stack<User> userStack;

    
    Book book1(101, "Book1");
    Book book2(102, "Book2");
    bookStack.push(book1);
    bookStack.push(book2);

   
    User user1(1001, "User1");
    User user2(1002, "User2");
    userStack.push(user1);
    userStack.push(user2);

   
    if (!bookStack.empty())
        std::cout << "Book available: " << bookStack.top().getName() << std::endl;

    
    if (!bookStack.empty() && !userStack.empty()) {
        std::cout << "Distributing " << bookStack.top().getName() << " to " << userStack.top().getName() << std::endl;
        bookStack.pop();
        userStack.pop();
    }

    return 0;
}

