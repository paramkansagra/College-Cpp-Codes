PAT-II

Description

Write a C Program and subsequent algorithm to Find the nth term of the series using functions.
1, 1, 2, 3, 4, 9, 8, 27, 16, 81, 32, 243, 64, 729, 128, 2187 ….

This series is a mixture of 2 series – all the odd terms in this series form a geometric series and all the even terms form yet another geometric series. Write a program to find the Nth term in the series.

• The value N in a positive integer that should be read from user.

• The Nth term that is calculated by the program should be printed as output.

• Other than value of n th term,no other character/string or message should be printed

• For example, if N=16, the 16th term in the series is 2187, so only value 2187 should be printed as output.

You can assume that N will not exceed 30. sum as output. Print ‘invalid’ and exit from the execution. if the boundary conditions are not met.

Boundary Condition(s):
0< N  > = 30

Input Format:
The first line contains the integer N.

Output Format:
Print the value of n th term.

Sample Test case Input-1:
13

Sample Test case Output-1:
64

Explanation

1, 1, 2, 3, 4, 9, 8, 27, 16, 81, 32, 243, 64, 729, 128, 2187 can represented as :

• 2(0), 3(0),2(1), 3(1),2(2), 3(2),2(3), 3(3),2(4), 3(4),2(5), 3(5),2(6), 3(6) ….

There are two consecutive sub GP’s at even and odd positions

• (GP-1) At Odd Positions (Powers of 2) – 1, 2, 4, 8, 16, 32, 64, 128

• (GP-2) At Even Positions (Powers of 3) – 1, 3, 9, 27, 81, 243, 729, 2187

Clearly, for calculating Nth position value

• If N is Even, Find (N/2) position in sub GP – 2

• If N is Odd, Find (N/2 + 1) position in sub GP – 1

Sample Test case Input-2:
-1

Sample Test case Output-2:
invalid

Sample Test case Input-3:
32

Sample Test case Output-3:
invalid

Sample Test case Input-4:
16

Sample Test case Output-4:
2187