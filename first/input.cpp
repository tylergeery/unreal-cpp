#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::getline;

struct UserInfo {
    int age;
    string name;
};

int main() {
    UserInfo ui;

    printf("What is your name?\n");
    getline(cin, ui.name);

    printf("What is your age?\n");
    cin >> ui.age;

    printf("Hello %s, who is %d years old.\n", ui.name.c_str(), ui.age);

    return 0;
}