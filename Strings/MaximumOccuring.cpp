// Maximum occuring character in an input String

#include <iostream>
#include <String>
using namespace std;

char getMaxChar(string s) {

    int arr[26] = {0};

    // Create an array of count of characters
    for (int i = 0; i<s.length(); i++) {
        
        char ch = s[i];
        int num = 0;

        // Lowercase
        if (ch >= 'a' && ch <= 'z') num = ch - 'a';

        // Uppercase
        else num = ch - 'A';

        arr[num]++;
    }

    int maxi = -1, ans = 0;
    for (int i = 0; i<26; i++) {
        if (maxi < arr[i]) {
            ans = i;
            maxi = arr[i];
        }
    }

    char finalAns = 'a' + ans;
    return finalAns;

}

int main() {

    string s;
    cin >> s;

    cout << getMaxChar(s) << endl;

    

    return 0;
}