#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Hello World" << endl;
    cout << "Give name" << endl;
    string str_name;
    getline(cin, str_name);

    cout << "Name: " << str_name << endl;
    return 0;
}