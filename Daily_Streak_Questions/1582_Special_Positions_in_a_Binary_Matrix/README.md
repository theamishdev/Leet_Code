<h2><a href="https://leetcode.com/problems/special-positions-in-a-binary-matrix">1582. Special Positions in a Binary Matrix</a></h2><h3>Easy</h3><hr><p>Given an <code>m x n</code> binary matrix <code>mat</code>, return the number of <em>special positions</em> in <code>mat</code>.</p>

<p>A position <code>(i, j)</code> is called <strong>special</strong> if <code>mat[i][j] == 1</code> and all other elements in row <code>i</code> and column <code>j</code> are <code>0</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> mat = [[1,0,0],
                    [0,0,1],
                    [1,0,0]]
<strong>Output:</strong> 1
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> mat = [[1,0,0],
                    [0,1,0],
                    [0,0,1]]
<strong>Output:</strong> 3
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>m == mat.length</code></li>
	<li><code>n == mat[i].length</code></li>
	<li><code>1 ≤ m, n ≤ 100</code></li>
	<li><code>mat[i][j]</code> is either <code>0</code> or <code>1</code></li>
</ul>