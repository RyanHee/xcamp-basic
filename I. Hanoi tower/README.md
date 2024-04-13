# Time limit：0.2   Memory limit：32M
# Description：

     The famous Hanoi tower problem:<br>

     There are three sticks A，B，C. There are N disks on stick A (N>1). The sizes of the disks decrease from bottom to the top. Please move all the disks to stick B according to the following rules.<br>

1. Move only one disk at a time.<br>

2. The bigger disk can't lay on the smaller disk.<br>

     You can use the following strategy to solve the problem:<br>

     Suppose we have to move t disks from stick x to stick y, we can first move the upper t-1 disks to another stick, then put the biggest disk to y, and finally move that t-1 disks to stick y. Therefore, moving that t-1 disks becomes a sub-problem.<br>

     Given n, please output the process of operation in the right order according to the above strategy.<br>

 

# Input：

a positive integer n

 

# Output：

Several lines, representing the process of operation.<br>

See sample for format.<br>

# Sample input 1：
2

# Sample output 1：

A->C
A->B
C->B
 

# Note：

1<=n<=10
