You are given a date represented by three integers: day, month, and year.
Your task is to calculate and print the date of the next day in DD-MM-YYYY format.

Rules and Requirements:

 -> Use only if / else conditional logic
 -> Do not use loops or switch statements

Correctly handle:

 -> Month endings
 -> Year transitions
 -> Leap-year February
 
 Validate Month and Minimum Day (optional but recommended)

 -> month must be between 1 and 12
 -> day must be at least 1
 -> (Upper bound for day is checked later based on the month)

 Decide the Maximum Number of Days in the Month (maxDay)

 -> February (month == 2) -> Determine whether the given year is a leap year.

A year is a leap year if:
    1. It is divisible by 400, OR
    2. It is divisible by 4 but not divisible by 100
    3. Otherwise, it is not a leap year.

Month-wise maxDay
    Months with 30 Days: 4, 6, 9, 11 | maxDay = 30
    Months with 31 Days: 1, 3, 5, 7, 8, 10, 12 | maxDay = 31
    Month 2: Leap Year: maxDay = 29 | Non-Leap Year: maxDay = 28

Input Format

A single line containing three space-separated integers: day month year

- day — day of the month
- month — month number (1–12)
- year — year (positive integer)

Output Format

Print a single line containing the next date in the format: DD-MM-YYYY
