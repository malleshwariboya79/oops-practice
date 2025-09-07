// Q1. Write a program to read your name and age, and print them in the format:
// Hello <name>, you are <age> years old.

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name;
    int age;
    cout << "Enter your name: " << endl;
    cin >> name;
    cout << "Enter your age: " << endl;
    cin >> age;
    cout << "Hello " << name << ", you are " << age << "  years old";
    return 0;
}