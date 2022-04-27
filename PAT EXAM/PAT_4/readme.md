PAT-IV

Description

Given a size n, and an array of positive integers, Write a ‘C++’ program using class and subsequent algorithm to find a good array, if it can be partitioned into 2 arrays of size n/2, say p1[ ] and p2[ ], such that p1[0] + p2[0] = p1[1] + p2[1] = p1[2] + p2[2] = ... . Given an array Y, determine the size of its largest subset which is a good array. For example, if the Input: size =6; elements: 1 4 2 3 8 10 , then the Output:4.

Input Format:

The first line contains the integer n (≤ 100).

The next 'n' line contains integers, which are the elements of the array X.

Output Format:

Print the One number which is the size of the greatest subset as mentioned in the problem statement.

Sample Test case Input-1:
6
1
4
2
3
8
10
 
Sample Test case Output-1:
4

Explanation:
The array {1,4,2,3} is good, since you can form p1[] = {1,2} and p2[] = {4,3}. (satisfying 1 + 4 = 2 + 3)

Sample Test case Input-2:
5
1
2
3
4
5
 
Sample Test case Output-2:
4

Sample Test case Input-3:
7
11
22
33
44
55
66
77
 
Sample Test case Output-3:
6

Sample Test case Input-4:
2
100
50

Sample Test case Output-4:
2
