# Gaussian Elimination

## What it does
The program gets inputs for matrix A, which represents the coefficients of the unknowns on the left-hand side of each equation, with each equation represented by a row.

It also gets inputs for vector b, which represents the right-hand side of each equation.

If the system is consistent, the rows are not linearly dependent on each other, and the system has non-zero pivots, the program calculates the values of the unknowns that solve the system and then prints them.

## Implementation

### Elimination to form upper triangle
Elimination is done to form an upper-triangular matrix using three nested loops.

The first loop starts from the first row and stops at the row before the last one because the last row has no rows below it where an element needs to be eliminated.

I define a multiplier called m:

m = -A[i][j]/A[j][j]

The numerator is the current number below the pivot, and the denominator is the pivot. The multiplier is then multiplied by the pivot row.

This makes the value below the pivot equal to the same value with the opposite sign. When the rows are added, the value becomes zero, forming the upper-triangular matrix.

The multiplier is applied to both A and the corresponding value in b. This preserves the equality of the original equation while performing the row operation.

### Back Substitution
After elimination, the system has an upper-triangular form. For example, a row could look like:

0 0 0 3 2 1

which represents an equation such as:


3x_4+2x_5+x_6=b


Starting from the last row, the value of the last unknown can be calculated directly by dividing the right-hand side by its coefficient.

Then, moving upward, the already calculated unknowns are substituted into the previous equations.

The variable sum is used to calculate the contribution of the already-known unknowns. This sum is subtracted from the corresponding value in b, and the result is divided by the coefficient of the current unknown.

Back substitution is implemented using two nested loops.

## Complexity
Time: O(equations³)

Space: O(equations²)

The time complexity is cubic because the elimination process uses three nested loops over the equations.

The space complexity is quadratic because matrix A contains equations × equations elements. The vectors b and x require additional linear space.

## Example


###Inputs
Number of equations: 2

Coefficients
---------------

1 2
10 10

Right Hand Side
---------------

3 10


###Output
------------------

x1 = -1
x2 = 2