# Matrix transpose

## What it does
It gets the transpose of an input matrix (m)
If input matrix dimensions are r x c, transpose matrix (mt) will be c x r and converting each row to a column 

## Implementation
The representation of matrix is nested vector with dimensions r x c
The transposed matrix is another nested vector with dimensions c x r
The algorithm iterates over each item at position (i, j) to be stored in the transposed matrix in (j, i) position

## Complexity
Time: O(rc)
Space: O(rc)


## Example

### inputs
Columns: 3
Rows: 2

Matrix M
1 2 3
4 5 6

### outputs
1 4
2 5
3 6

## Later integration
It will be reconstructed as a method of a reusable Matrix class