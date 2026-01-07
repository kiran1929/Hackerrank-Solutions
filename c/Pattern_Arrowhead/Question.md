Write a program to print an arrowhead pattern based on an integer input n. The pattern should consist of asterisks (*) in the shape of an arrowhead which narrows back to a single asterisk symmetrically after reaching the widest row.

The pattern should be formed based on the number of rows n entered by the user.

Note: Handle invalid inputs gracefully by displaying an appropriate error message, "Shape Not Possible", if the arrowhead cannot be drawn by the given input value.

Input Format

A single integer n.
Constraints

-50 <= n <= 50
Output Format

A symmetric arrowhead pattern, for n=5, as described below:
*
**
* *
*  *
*   *
*  *
* *
**
*
Print "Shape Not Possible" if the arrowhead cannot be drawn.
