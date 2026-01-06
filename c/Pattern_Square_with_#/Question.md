Write a program to print a square pattern based on an integer input n. The pattern should consist of asterisks (*) and hash symbols (#) arranged as follows:

The first and last rows of the square are completely filled with asterisks (*).
The intermediate rows have asterisks (*) at the boundaries and hash symbols (#) filling the inner spaces.
Note: Handle invalid inputs gracefully by displaying an appropriate error message, "Shape Not Possible", if the square cannot be drawn having (#) within it.

Input Format

A single integer n.
Constraints

-50 <= n <= 50
Output Format

A square pattern, for n=5, as described below:

* * * * *
* # # # *
* # # # *
* # # # *
* * * * *

Print "Shape Not Possible" if the sandglass cannot be drawn.
