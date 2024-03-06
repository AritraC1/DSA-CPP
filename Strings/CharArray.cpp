// Character Array and Strings

/*
C++ strings are sequences of characters stored in a char array. Strings are used to store words and text. 
They are also used to store data, such as numbers and other types of information.
*/

// strings in cpp -> 1D char array

#include <iostream>
using namespace std;

// Function to get length of a given string
int getLength(char name[]) {

    int count = 0;
    for (int i = 0; name[i] != '\0'; i++) {
        count++;
    }

    return count;
}

int main() {

    char a = 'z';
    cout << "Char: " << a << endl;

    // 2 ways of defining a string in cpp
    string s = "GeeksforGeeks";
    cout << "s = " << s << endl;

    string str("GeeksforGeeks");    
    cout << "str = " << str << endl;

    // Char Array
    char arr[10];

    // Taking input
    char name[20];
    cout << "Enter name: ";
    cin >> name;

    /*
    
    name[2] = '\0'; // null k baad kaat dia
    cout << "Now name is: " << name << endl;

    
    Note: In strings " ", "\t", "\n", inke baad print nhi hota baki
    */


    // Length of string
    // cout << "Length: " << getLength(name) << endl;
    
    // to get full line - cin.getline(str, len);

    return 0;
}