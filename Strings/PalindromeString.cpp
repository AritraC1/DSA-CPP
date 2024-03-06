// To wordeck if the given string is palindrome

#include <iostream>
#include<string>
using namespace std;

// Function to get length of a given string
int getLength(char word[]) {

    int count = 0;
    for (int i = 0; word[i] != '\0'; i++) {
        count++;
    }

    return count;
}

/*

// My function

// To wordeck palindrome :  1 - true , 0 - false
// this is only when both the letters of the word in the start and end is either uppercase or lowercase
bool validPalindrome(char word[], int n) {
    int s = 0, e = n-1;

    while(s<=e) {
        if (word[s++] == word[e--]) return true;
        else return false;
    }
}

*/

bool valid(char word) {
    if( (word >= 'a' && word <= 'z') || (word >= 'A' && word <= 'Z') || (word >= '0' && word <= '9')) return 1;
    else return 0;
}

// Lowecase

char toLowerCase(char word) {
    if( (word >='a' && word <='z') || (word >='0' && word <='9') ) return word;
    
    else{
        char temp = word - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(string a) {
    int s = 0;
    int e = a.length()-1;

    while(s<=e) {
        if(a[s] != a[e]) return 0;       

        else{
            s++;
            e--;
        }
    }

    return 1;
}

bool isPalindrome(string s) {
        
    //faltu character hatado
    string temp = "";
        
    for(int j=0; j<s.length(); j++) {   
        
        if(valid(s[j])) 
        {
            temp.push_back(s[j]);
        }
    }
        
    //lowercase me kardo
    for(int j=0; j<temp.length(); j++) temp[j] = toLowerCase(temp[j]);
        
    //check palindrome
    return checkPalindrome(temp);
        
}


int main() {

    char word[20];
    cout << "Enter word: ";
    cin >> word;

    int len = getLength(word);

    // int ans = validPalindrome(word, len);

    // if (ans == 1) cout << "True";
    // else cout << "false";

    cout << "Palindrome or not: " << checkPalindrome(word, len) << endl;

    return 0;
}