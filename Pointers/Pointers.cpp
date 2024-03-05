// POINTERS

/*

Definition:-
Pointers are symbolic representations of addresses. They enable programs to simulate call-by-reference as well 
as to create and manipulate dynamic data structures. Iterating over elements in arrays or other data structures 
is one of the main use of pointers. 

Syntax:-
datatype *var_name; 
int *ptr;   // ptr can point to an address which holds int data

*/

#include <iostream>
using namespace std;

// Function
void print(int *p)
{
    cout << p << endl;
    cout << *p << endl;
}

void update(int *p)
{
    // p = p + 1;
    *p = *p + 1;
}

int main() {

   /*

    int num = 5;
    cout << "The value of num is: " << num << endl; // prints 5

    // Address of Operator - &
    cout << "Address of num is: " << &num << endl;

    cout << endl;

    double d = 4.3;
    double *p = &d; // Creating a pointer
    cout << "The value of a is: " << *p << endl; // prints the value of a
    cout << "The address of a is: " << p << endl; // prints the address of the location of a

    // Sizes
    cout << "Size of d: " << sizeof(d) << endl;
    cout << "Size of pointer a: " << sizeof(p) << endl;

    */

   /*

    // 2 methods to write a pointer

    // Method 1
    int i = 5;
    int *q = &i;
    cout << q << endl;
    cout << *q << endl;

    // Method 2
    int *p = 0;
    p = &i;
    cout << p << endl;
    cout << *p << endl;

    */

   /*

   int num = 5;
   int a = num;
   cout << "a before: " << a << endl;
   a++;
   cout << "a after: " << a << endl;

   int *p = &num;
   cout << "before: " << num << endl;
   (*p)++;
   cout << "after: " << num << endl;

   // Copying a pointer
   int *q = p;
   cout << p << " - " << q << endl;
   cout << *p << " - " << *q << endl;

   cout << endl;

   // Important Concept
   int i = 3;
   int *t = &i;
   cout << *t << endl;
   cout << "Before t: " << t << endl;
   t = t+1;
   cout << "After t: " << t << endl; // increase in 4 byte
   
    // cout << *t++ << endl;
    // cout << (*t)++ << endl; // *t = *t + 1

    */

   /*

   // Arrays and Pointers  

    int arr[10];

    cout << "Address of first memory block is: " << arr << endl;
    cout << arr[0] << endl;
    cout << "Address of first memory block is: " << &arr[0] << endl;
    
    */

   /*

    int array[10] = {23, 122, 41, 67};
    cout << "Value: " << *array << endl; // prints the value of array[0]
    cout << "Value: " << *array+1 << endl; // prints the value of array[0] + 1
    cout << "Value: " << *(array+1) << endl; // prints the value of array[0 + 1] = array[1]
    cout << "Value: " << array[2] << endl; // prints the value of array[2] = array[2]
    cout << "Value: " << *(array+2) << endl; // prints the value of array[0 + 2] = array[2]
   
    int i = 3;
    cout << "Value: " << i[array] << endl; // prints the value of array[arr + i] = array[0+3] = array[3]
   
    

    int temp[10] = {1,2};
    cout << "1st: " << sizeof(temp) << endl;
    cout << "2nd: " <<  sizeof(*temp) << endl;
    cout << "3rd: " <<  sizeof(&temp) << endl;

    int *ptr = &temp[0];
    cout << "4th: " << sizeof(ptr) << endl;
    cout << "5th: " <<  sizeof(*ptr) << endl;
    cout << "6th: " <<  sizeof(&ptr) << endl;

    */

   /*
    // Character Array

    int arr[5] = {1, 2, 3, 4, 5};
    cout << "Arr: " << arr << endl; // prints the address of arr[0]

    char ch[6] = "abcde";
    cout << "Char: " << ch << endl; // prints the entire content of ch

    char *c  = &ch[0];
    cout << "Ans: " << c << endl; // prints the entire content of ch
    cout << "Ans: " << *c << endl; // prints the first charcter in ch i.e. 'a'

    // no null
    char temp = '2';
    char *p = &temp;
    cout << p << endl;

    */

   /*
   
    // Pointers and Functions
    int value = 5;
    int *p = &value;

    // print (p);
    cout << "Before: " << p << endl;
    update(p);
    cout << "After: " << p << endl;
    */


    return 0;
}