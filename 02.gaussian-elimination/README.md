# Gaussian Elimination

## What it does
It gets inputs for matrix A which represents coefficients of unknowns in left hand side for each equation in row.
It gets inputs for matrix b which represents right hand side for each equation.
if the system is consistent and rows aren't lineary dependent on each other with non-zero pivots, the program get values of unkonws which solve that system, then print it.

## Implementation

### Elimination to form upper triangle
Elimination is done to get upper triangle by three nested loops.
first loop starts from frist row until the row before the last, because last one has no rows below it to make the number below it becomes zero,
I defined multiplier is called m, negative sign to subtract current row with current pivot, denomenator is the pivot to multply m by current pivot's row, numerator is current number below the pivot.
when it is m is multiplied by current pivot's row, the pivot becomes as same as the number below it but with negative sign, so when they added it becomes zero to form upper triangle.

m is mulptiplied by A and the corresponding b[i] and add to pivot's row result to preserve on equation.

### Back Substitution
If row is zeros then numbers somehting like  0 0 0 0 3 2 1 in A, so I need to move 1 multplied its variable added to 2 multiplied by its variable, then subtract it from corresponding hand side, it is easy to get unknown of 3 by divide both side by 3.

sum is used to added those numbers then subtract sum from corresponding right hand side in b.

It is two nested loops, after calculating the sum, unknown is corresponing right hand side in b, subtract from it sum, then divide by the cofficient of current calculating unknown.

## Complexity
Time: O(equations^3)
Space: O(1);

## Example
