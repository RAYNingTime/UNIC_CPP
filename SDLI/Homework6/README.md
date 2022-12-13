# Software Development Lab I (COMP-116)
## Homework 6

1. Write a program that prompts the user to enter a word which may have the length of 5
  or 6 characters. The program afterwards:
  
  - reverses the word (e.g., heLlo becomes olLeh),
  - checks if the word is a palindrome by not distinguishing between lower-case and upper-case letters (e.g., AnNa is a palindrome word),
  - writes the word in a file named palindrome_word_checker.txt by preserving the contents of the file.

_Note: you cannot use the cctype library or loops._

**Example 1:**
```
Enter a word with length 5-6 characters: kayAk
kayAk is a palindrome word.

[palindrome_word_checker.txt]
Word     Palindrome
kayAk    yes
```

**Example 2:**
```
Enter a word with length 5-6 characters: laPtOp
laPtOp is NOT a palindrome word.

[palindrome_word_checker.txt]
Word    Palindrome
kayAk   yes
laPtOp  no
```

___

2. Write a program for a company’s payroll application which calculates the weekly salary
and deductions of an employee. The program must read the following information and
then prints the payroll statement for the employee in a file named
<employeeName>_w<weekNo>.txt:
  
- Week No (e.g., 23)
- Employee’s name (e.g., Smith)
- Number of hours worked in a week (e.g., 10)
- Hourly pay rate (e.g., 9.75)
- Federal tax withholding rate (e.g., 20%)
- State tax withholding rate (e.g., 9%)
  
**Example:**
```
Payroll Application
Enter week no.: 23
Enter employee's name: Smith
Enter number of hours worked in a week: 10
Enter hourly pay rate: 9.75
Enter federal tax withholding rate (%): 20
Enter state tax withholding rate (%): 9
  
[Smith_w23.txt]
  
Employee Name: Smith
Hours Worked: 10.0
Pay Rate: $9.75
Gross Pay: $97.50
Deductions:
  Federal Withholding (20.0%): $19.5
  State Withholding (9.0%): $8.77
  Total Deduction: $28.27
Net Pay: $69.22
```
  
___
  
3. Write a program that prompts the user to enter three cities and then writes the three
cities in file named cities.txt in ascending order.
  
**Example:**
  
```
Enter the first city: Chicago
Enter the second city: Los Angeles
Enter the third city: Atlanta
  
[cities.txt file]
  
The three cities in alphabetical order are:
Atlanta
Chicago
Los Angeles
```
