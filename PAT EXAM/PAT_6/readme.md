PAT-VI
Description

Lists are sequence containers that allow non-contiguous memory allocation. As compared to vector, list has slow traversal, but once a position has been found, insertion and deletion are quick. The working of a list is similar to the working of a doubly linked list. Now, as a data analyst, you are requested to perform the following operations using lists in STL.

i)          Get the number of elements ‘n’  to be inserted and perform the insert operation using the elements entered

ii)         Reverse the inserted elements

iii)        Insert a new element ‘x’ at the second position

iv)        Insert the element ‘y’ two times at the end of the list

Input Format:

Total no. of elements ‘n’  element at second position ‘x’   element ‘y’

Output Format:

First-line consists of a sequence upto ‘n’

Reverse the list

Insert a new element ‘x’ at the second position in the reversed list

Insert the element ‘y’ two times at the end of the reverse list

Sample Test Case Input -1:

8 10 20

Sample Test Case Output-1:

1 2 3 4 5 6 7 8

8 7 6 5 4 3 2 1

8 10 7 6 5 4 3 2 1

8 10 7 6 5 4 3 2 1 20 20
 

Sample Test Case Input-2 :

5 11 88

Sample Test Case Output-2:

1 2 3 4 5

5 4 3 2 1

5 11 4 3 2 1

5 11 4 3 2 1 88 88