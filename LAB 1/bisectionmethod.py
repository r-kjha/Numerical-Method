# Python program for implementation
# of Bisection Method for
# solving equations

# An example function whose
# solution is determined using
# Bisection Method.
# The function is x^2 - 4x - 10
def eqn(x):
    return x*x - 4*x - 10

# Prints root of eqn(x)
# with error of EPSILON
def bisection(a, b):
    if eqn(a) * eqn(b) >= 0:
        print("You have not assumed right a and b\n")
        return

    c = a
    count = 0;
    while (b - a) >= 0.01:
        # Find middle point
        c = (a + b) / 2

        # record iteration count
        count += 1

        # Check if middle point is root
        if eqn(c) == 0.0:
            break

        # Decide the side to repeat the steps
        if eqn(c) * eqn(a) < 0:
            b = c
        else:
            a = c

    print("The value of root is : ", "%.4f" % c, "in ", count , " iterations.") # 4 floating point after .

# Driver code
# Initial values assumed
a = float(input("Enter the value of a: "))
b = float(input("Enter the value of b: "))
bisection(a, b)
