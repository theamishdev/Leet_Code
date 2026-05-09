<h1>1914. Cyclically Rotating a Grid</h1>

<p>
You are given an <b>m × n</b> matrix and an integer <b>k</b>.
Rotate each layer of the grid counter-clockwise by <b>k</b> steps.
</p>

<hr>

<h2>Example</h2>

<pre>
Input:
grid = [[40,10],[30,20]]
k = 1

Output:
[[10,20],
 [40,30]]
</pre>

<hr>

<h2>Approach</h2>

<p>
Each matrix layer is treated independently.
</p>

<ul>
<li>Extract the boundary elements of a layer into an array.</li>
<li>Rotate the array by k positions.</li>
<li>Place rotated elements back into the grid.</li>
</ul>

<p>
This avoids complicated in-place movement logic.
</p>

<hr>

<h2>Time Complexity</h2>

<p>O(m × n)</p>

<h2>Space Complexity</h2>

<p>O(m × n)</p>