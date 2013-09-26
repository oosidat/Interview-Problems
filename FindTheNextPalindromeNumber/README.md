Finding The Next Palindrome
===========================

This is an attempt to solve the ["Are We There Yet?" Problem ](https://icpcarchive.ecs.baylor.edu/external/59/5952.pdf), presented in the ACM Contest 2011 (NA North Central)

Usage:
------ 
`./arewethereyet [<< input >> output]`

Terminated when '-1' is passed as input

Input Restrictions: 6 digit numbers, padded by zero if necessary, OR -1, to terminate the program.

Examples:
---------
```
Sample Input    Output for the Sample Input
-----------     ---------------------------
005432          Case 1: 13 miles to 005445.
000012          Case 2: 10 miles to 000022.
100002          Case 3: 1099 miles to 101101.
000005          Case 4: 0 miles to 000005.
-1
```

Notes
-----
Currently, this solution uses brute force to compute the next palindrome. The next challenge is to replace the brute force algorithm with a faster option, and verify it against the original results.
