#include <iostream>
#include <cmath> //cmath is a set of math functions

using namespace std;

int main()
{

    cout << 5 + 7 << endl;
    // + add
    // - subtract
    // / Divide
    // * Multiply
    cout << 10 % 3 << endl;
    // % modulus. gives remainder
    cout << 4 + 5 * 10 << endl;
    // C++ will follow order of operations PEMDAS

    int wnum = 5;
    double dnum = 5.245;
   
    cout << wnum << endl << dnum << endl;
    cout << wnum << "\n" << dnum << endl;
    // both of these will print the same thing

    wnum++;
    dnum++; 
    cout << wnum << endl << dnum << endl;
    // ++ will add 1 to the variable
    // -- will subtract 1
    // +=50 will add 50 to the variable
    wnum=+49;
    cout << wnum << endl << dnum << endl; 

    cout << 5.5 + 9 << endl;
    // when adding a double/float and an integer, the return will be a decimal.
    // when dividing 2 integers, an integer will be returned so 10/3 will return 3 and will not return the remainder
    // To have the above division problem work, either 10 or 3 or both must be a float/double.
    cout << 10.0 / 3 << endl; // this will return 3.333333
    cout << 10 / 3 << endl; // this will return just 3

    cout << pow(2, 5) << endl; // This will print 2 to the power of 5
    cout << sqrt(9) << endl; // This will print the square root of 9 = 3
    // integers and decimals work for these
    cout << round(5.6787) << endl; // This will round to the nearest integer. In this case, 6 will print
    cout << ceil(4.1) << endl; // This will round up no matter the decimal. This will print 5
    cout << floor(4.9) << endl; // This will round down no matter the decimal. This will print 4
    cout << fmax(2, 5) << endl; // This will return the larger of the two numbers. This will print 5
    cout << fmin(2, 5) << endl; // This will return the smaller of the two numbers. This will print 2

    return 0;
}