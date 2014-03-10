Matrix Rotation
===============

Problem from [Problem of the Day](http://www.problemotd.com/problem/matrix-rotation/)

Problem Description (copied from the site):
-------------------------------------------
> Matrix Rotation
>
> The bank manager at my local bank recently gave me the algorithm to access the bank's vault. I thought I'd pass on the algorithm to you all for "safe keeping". Basically the vault has a USB port which you'll need to plug in to. Once plugged in the vault will send you an NxN matrix such as the one below.
> 
> Monday-Friday the key to the vault is to rotate the matrix 90 degrees clockwise. On Saturday and Sunday you have to rotate the matrix 90 degrees counter-clockwise. My dog accidentally got locked in the vault and the bank manager is no where to be found. Can someone help me write a program to get him out?


Notes:
------
**Matrix (NxN) representation:** A List of N Lists. Each List contains N elements and represents a row in the matrix.

**To rotate clockwise:**

`rotate_clockwise(matrix)`

**To rotate counter-clockwise:**

`rotate_counterclockwise(matrix)`