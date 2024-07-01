#include<iostream>

using namespace std;
#define EPSILON 0.01

// An example function whose solution is determined using
// Bisection Method. The function is x^2 - 4x - 10 = 0
double eqn(double x)
{
    return x*x - 4*x - 10;
}

// Prints root of eqn(x) with error of EPSILON
void bisection(double a, double b)
{
    if (eqn(a) * eqn(b) >= 0)
    {
        cout << "You have not assumed the right a and b\n";
        return;
    }

    double c = a;
    while ((b-a) >= EPSILON)
    {
        // Find middle point
        c = (a+b)/2;

        // Check if middle point is root
        if (eqn(c) == 0.0)
            break;

        // Decide the side to repeat the steps
        else if (eqn(c) * eqn(a) < 0)
            b = c;
        else
            a = c;
    }
    cout << "The value of root is: " << c << endl;
}

// Driver program to test the above function
int main()
{
    // Initial values assumed
    double a, b;
    cout << "Enter the range of roots: eg:5,6";
    cin >> a >> b;

    bisection(a, b);
    return 0;
}
