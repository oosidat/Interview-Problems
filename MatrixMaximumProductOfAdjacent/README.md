Maximum Product of m Adjacent Elements in a nxn Matrix
======================================================

Usually, I just script out Project Euler problems...this time, I decided to write something slightly more resusable.


In its current state, this solution is entirely brute force, with no time considerations. It computes all possible adjacent lines in the matrix (grid) (all rows, columns and diagonals greater than length m (4)), and computes the maximum product of M (4) adjacent elements across all adjacent lines. Finally, it returns the maximum of all of those computed values.
 
