# Time Complexity - 

## Definition:
- It is the amount of time taken by an algorithm to run
- As a function of length of the input

## Why Time Complexity?
- For making better programs
- Comparison of algo

We can tell whether a program is fast or slow only on the basis of Time Complexity and not on the basis of the processing machine.

## Complexity Notations:
1. Big O Notation - Upper Bound (Mostly Used)
2. Theta θ - For average case complexity
3. Omega Ω - Lower Bound

### Big O Notation
1. Constant Time -->O(1)
eg: for(int i=0; i++)
    {
        cout << "Hello";
    }

2. Linear Time --> O(n)
 eg: for(int i=0; i<n ;i++)  n is a variable
    {
        cout << "Hello";
    }

3. Logarithmic Time --> O(log n)
eg: Binary Search

4. Quadratic Time --> O(n^2)
eg: Nested loop

5. Cubic Time --> O(n^3)
eg: Nested k andar nested 

#### Note - Also while checking time complexity always consider worst case scenario.

## Order Of Complexity
Highest Complexity - O(N!) >> O(2^n) >> O(N^3) >> O(N^2) >> O(Nlog N) >> O(N) >> O(log N) >> O(1) - Lowest Complexity

## Sample Time Complexity Problems

#### Note --> Ignore constants and the lower degree i.e. Consider only the Highest Degree.

1. f(n) = 2n^2 + 3n       : O(n^2)
2. f(n) = 4n^4 + 3n^3     : O(n^4)
3. f(n) = N^2 + Log N     : O(N^2)
4. f(n) = 12001           : O(1) - Constant Time
5. f(n) = 3n^3 + 2n^2 + 5 : O(n^3)
6. f(n) = n^3 / 300       : O(n^3)
7. f(n) = 5n^2 + Log n    : O(n^2)
8. f(n) = n / 4           : O(n) - Linear Time 
9. f(n) = (n+4) / 4       : O(n) - Linear Time

#### Note -- >
Case 1 - O(n*m) - In nested Case
for(i=0; i<n; i++)
{
    for(i=0; i<m; i++) 
    {

    }
}

Case 2 - O(n+m) - In different loops case
for(i=0; i<n; i++)
{

}

for(i=0; i<n; i++)
{

}

### What is the time complexity of following code:

int a = 0, b = 0;
for (int i = 0; i<N ; i++) 
{
    for (j = 0; j<N; j++) 
    {
        a = a+j;
    }
}

for (k=0; k<N; k++) 
{
    b = b+k;
}

Time Complexity - N^2 + N = O(N^2)

