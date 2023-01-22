// THE FIZZ BUZZ TOO PROBLEM
// Given an int n, print the number followed by "!".
// So the int 6 prints "6!". Except if the number is
// divisible by 3 use "Fizz" instead of the number,
// and if the number is divisible by 5 use "Buzz",
// and if divisible by both 3 and 5, use "FizzBuzz".
// Do not put the quotes around your output. I will do that in the problem.

// • input of 1 → "1!"
// • input of 2 → "2!"
// • input of 3 → "Fizz!"

#include <iostream>
#include <string>
using namespace std;

string fizzBuzzToo(int n)
{
    string result;

    if(n % 3 == 0 && n % 5 == 0)
        cout << "FizzBuzz" << endl;
    else if(n % 3 == 0)
        cout << "Fizz" <<endl;
    else if (n % 5 == 0)
        cout << "Buzz" << endl;
    else cout << n << '!' << endl;

    return result;
}

int main()
{
    cout << "Testing fizzBuzzToo(1): " << fizzBuzzToo(1) << endl;
    cout << "Testing fizzBuzzToo(2): " << fizzBuzzToo(2) << endl;
    cout << "Testing fizzBuzzToo(3): " << fizzBuzzToo(3) << endl;
    cout << "Testing fizzBuzzToo(4): " << fizzBuzzToo(4) << endl;
    cout << "Testing fizzBuzzToo(5): " << fizzBuzzToo(5) << endl;
    cout << "Testing fizzBuzzToo(6): " << fizzBuzzToo(6) << endl;
    cout << "Testing fizzBuzzToo(10): " << fizzBuzzToo(10) << endl;
    cout << "Testing fizzBuzzToo(15): " << fizzBuzzToo(15) << endl;
    return 0;
}