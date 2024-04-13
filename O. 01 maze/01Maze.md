# Time Limit: 1s    Memory Limit: 128M

# Description:
There is a n∗n maze which only has number 0 and 1. If you are in a spot 0, then you can move to one of the four adjacent cells with 1 in it. If you are in 1, then you can move to one of the four adjacent cells with 0 in it.  Given the maze, find out how many cells you can move into (including the original cell).

 

# Input Format:
The first line contains two positive integers n, m. (n≤1000,m≤100000) The next n lines, each line contains n characters (0 or 1, with no space in between) The next m lines, each line contains two positive integers i and j (separated by space), which means the cell in the i-th row and the j-th column (the starting point).

 

# Output Format:
m lines，output the answer for each inquiry.

 

# Sample Input:
2 2<br>
01<br>
10<br>
1 1<br>
2 2<br>
# Sample Output:
4<br>
4<br>

# Sample Input:
3 3<br>
010<br>
101<br>
011<br>
1 1<br>
2 2<br>
3 3<br>
# Sample Output:
8<br>
8<br>
1<br>