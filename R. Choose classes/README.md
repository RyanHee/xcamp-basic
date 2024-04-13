# Time: 1s  Memory: 128M

# Description：
School has n classes. Class i has the start time Si and the end time Ei. At any given time, student can only attend one class, and can get the benefit only after attended the whole class.<br> 
There are conflicts between the class schedules, and parents want their kids to learn as much as they can. How to choose the classes so that the students can attend most number of the classes?<br> 

# Input format：
First line: an integer n(n≤1000), the number of classes available to choose from.<br> 
Followed by n lines: 2 integers per line, Si and Ei (Si < Ei ≤ 32767)<br> 

# Output format：
The max number of classes that a student can possibly attend.<br> 

# Sample input：
3<br>
0 6<br>
0 4<br>
4 8<br>

# Sample output：
2<br>

# Sample input：
3<br>
8 10<br>
0 4<br>
4 8<br>

# Sample output：
3<br>

# Sample input：
4<br>
8 10<br>
0 4<br>
4 8<br>
10 11<br>

# Sample output：
4<br>

# Sample input：
5<br>
0 2<br>
3 8<br>
4 7<br>
7 10<br>
5 6<br>

# Sample output：
3<br>
