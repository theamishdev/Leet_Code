<h1>48. Rotate Image</h1>

<p>
You are given an n × n 2D matrix representing an image.
Rotate the image by 90 degrees (clockwise).
</p>

<p>
You must rotate the image <b>in-place</b>.
</p>

<hr>

<h2>Example</h2>

<pre>
Input:
matrix = [
 [1,2,3],
 [4,5,6],
 [7,8,9]
]

Output:
[
 [7,4,1],
 [8,5,2],
 [9,6,3]
]
</pre>

<hr>

<h2>Approach 1 (Primitive)</h2>

<p>
Create a new matrix and map each element:
</p>

<pre>
new[j][n-1-i] = matrix[i][j]
</pre>

<p>
Then copy back.
</p>

<hr>

<h2>Approach 2 (Optimal - In Place)</h2>

<p>
Step 1: Transpose the matrix  
Step 2: Reverse each row
</p>

<p>
This rotates the matrix without extra space.
</p>

<hr>

<h2>Time Complexity</h2>

<p>O(n²)</p>

<h2>Space Complexity</h2>

<p>O(1)</p>