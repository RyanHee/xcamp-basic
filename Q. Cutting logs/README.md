# Time limit：1s   Memory limit：512M
# Description：

There are some logs in timber factory, which should be cut into pieces of the same length (there may be some remaining). The number of pieces has been decided. We want the length of those pieces to be as long as possible. Find out the maximum length (cm, positive integer).<br>

For example, there are two logs with lengths of 11 and 21. You are required to cut them into 6 pieces of the same length. It's easy to see that the maximum length is 5.<br>

 

# Input：

The first line contains two integers N and K(1 ≤ N ≤ 100000，1 ≤ K ≤ 100000000). N is the number of logs. K is the number of wood pieces.<br>

The next N lines each contains a positive integer (1 to 100000000)--- the length of a log.<br>

# Output：

The maximum length they can be cut into. If it's smaller than 1cm，print ”0”.

# Sample input：

3 7<br>
232<br>
124<br>
456<br>

# Sample output：

114
