#include <iostream>
#include <string> // For string data type
using namespace std;

// Function declaration
int str();

int main() {
    // int range -2,147,483,648 to 2,147,483,647
    // bytes 4
    // Other name: signed

    int a = -2147483648;
    // int b = 2147483648; // Error: out of range for int

    // unsigned int range 0 to 4,294,967,295
    // bytes 4
    // Other name: unsigned

    unsigned int c = 4294967295;
    // unsigned int d = 4294967295; // Same as c

    // __int8 range -128 to 127
    // Bytes 1
    // Other name: char

    char e = 123;

    // long range -2,147,483,648 to 2,147,483,647
    // long long range -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807

    // Refer more data types:
    // https://learn.microsoft.com/en-us/cpp/cpp/data-type-ranges?view=msvc-170

    // float, double, long double

    // string

    string s1 = "Naveen"; // Don't forget the semicolon
    str(); // Call str() function
    return 0;
}

// Function definition
int str() {

    //string getline 
    string s;
    cout << "Entre Name : ";
    getline(cin, s);
    cout << s;
    return 0;
}

//int , long, float, double 
//string , char, getline 
// this data types are enough to learn DSA