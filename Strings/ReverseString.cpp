// Reverse a string

#include <iostream>
#include <algorithm>
using namespace std;

// Function to get length of a given string
int getLength(char word[]) {

    int count = 0;
    for (int i = 0; word[i] != '\0'; i++) {
        count++;
    }

    return count;
}

// Function to reverse a string
void revword(char word[], int n) {
    int s = 0;
    int e = n-1;

    while(s<e) {
        swap(word[s++], word[e--]);
    }
}

int main() {

    char word[20];
    cout << "Enter word: ";
    cin >> word;

    int len = getLength(word);

    revword(word, len);
    cout << "Word reversed: " << word << endl;

    return 0;
}