This New Year, Sharib (an experienced event planner) is planning a celebration and needs your help to determine if they can host it within their budget. Sharib has a list of expenses for different activities and items, along with specific conditions for hosting the celebration. Write a program to evaluate whether Sharib can host the celebration or not.

Conditions to Host the Celebration:

1-> The total cost of the celebration must not exceed the budget.
2-> The number of guests must be greater than 5 and less than or equal to 50.
3-> At least one of the following conditions must hold:
    * The decoration cost is less than 30% of the budget.
    * The total food cost is less than 50% of the budget.
4-> If the number of guests exceeds 25, there must be a music arrangement (i.e., musicCost > 0).
Input Format

The input consists of six integers:

1-> budget: Total budget for the celebration (in dollars).
2-> numGuests: Number of guests invited.
3-> foodCostPerGuest: Cost of food per guest (in dollars).
4-> decorationCost: Cost of decorations (in dollars).
5-> musicCost: Cost of hiring a DJ or music system (in dollars).
6-> extraExpenses: Additional expenses for the celebration (in dollars).

Output Format

Output a single line:

-> "Celebration Approved" if Sharib can host the celebration within the given conditions.
-> "Celebration Denied" otherwise.
