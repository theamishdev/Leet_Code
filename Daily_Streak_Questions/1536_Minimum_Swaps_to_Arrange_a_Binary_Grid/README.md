<h2><a href="https://leetcode.com/problems/minimum-swaps-to-arrange-a-binary-grid">1536. Minimum Swaps to Arrange a Binary Grid</a></h2><h3>Medium</h3><hr><p>Given an <code>n x n</code> binary grid, in one step you can swap two adjacent rows of the grid.</p>

<p>A grid is considered valid if all the cells above the main diagonal are zeros.</p>

<p>Return the minimum number of steps needed to make the grid valid, or <code>-1</code> if the grid cannot be made valid.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> grid = [[0,0,1],[1,1,0],[1,0,0]]
<strong>Output:</strong> 3
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> grid = [[0,1,1],[1,0,0],[1,0,0]]
<strong>Output:</strong> -1
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> grid = [[1,0,0],[1,1,0],[1,1,1]]
<strong>Output:</strong> 0
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>n == grid.length == grid[i].length</code></li>
	<li><code>1 &lt;= n &lt;= 200</code></li>
	<li><code>grid[i][j]</code> is either <code>0</code> or <code>1</code></li>
</ul>