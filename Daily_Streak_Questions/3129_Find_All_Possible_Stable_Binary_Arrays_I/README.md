<h1>3129. Find All Possible Stable Binary Arrays I</h1>

<p>
You are given three integers <b>zero</b>, <b>one</b>, and <b>limit</b>.
</p>

<p>
A binary array is called <b>stable</b> if:
</p>

<ul>
<li>The array contains exactly <b>zero</b> number of 0s.</li>
<li>The array contains exactly <b>one</b> number of 1s.</li>
<li>No more than <b>limit</b> consecutive identical elements appear.</li>
</ul>

<p>
Return the number of stable binary arrays that can be formed.
</p>

<p>Since the answer can be large, return it modulo <b>10<sup>9</sup> + 7</b>.</p>

<hr>

<h2>Example</h2>

<pre>
Input: zero = 1, one = 1, limit = 2
Output: 2

Explanation:
Possible arrays:
01
10
</pre>

<hr>

<h2>Approach</h2>

<p>
We use <b>Dynamic Programming</b>.
</p>

<p>
Let:
</p>

<ul>
<li>dp[i][j][0] → arrays with i zeros and j ones ending in 0</li>
<li>dp[i][j][1] → arrays with i zeros and j ones ending in 1</li>
</ul>

<p>
We build the array step by step while ensuring that no more than
<b>limit</b> consecutive elements appear.
</p>

<hr>

<h2>Time Complexity</h2>

<p>O(zero × one × limit)</p>

<h2>Space Complexity</h2>

<p>O(zero × one)</p>