<h1>3130. Find All Possible Stable Binary Arrays II</h1>

<p>
You are given three integers <b>zero</b>, <b>one</b>, and <b>limit</b>.
</p>

<p>
A binary array is called <b>stable</b> if:
</p>

<ul>
<li>It contains exactly <b>zero</b> number of 0s.</li>
<li>It contains exactly <b>one</b> number of 1s.</li>
<li>No more than <b>limit</b> consecutive identical elements appear.</li>
</ul>

<p>
Return the number of possible stable binary arrays.
Since the result may be large, return it modulo <b>10<sup>9</sup> + 7</b>.
</p>

<hr>

<h2>Example</h2>

<pre>
Input: zero = 1, one = 2, limit = 1
Output: 1

Explanation:
Only valid array:
101
</pre>

<hr>

<h2>Approach</h2>

<p>
We use <b>Dynamic Programming</b>.
</p>

<p>
Define:
</p>

<ul>
<li>dp[i][j][0] → arrays with i zeros and j ones ending with 0</li>
<li>dp[i][j][1] → arrays with i zeros and j ones ending with 1</li>
</ul>

<p>
To avoid exceeding <b>limit</b> consecutive elements, we subtract invalid ranges
using prefix sums. This removes the inner loop and improves efficiency.
</p>

<hr>

<h2>Time Complexity</h2>

<p>O(zero × one)</p>

<h2>Space Complexity</h2>

<p>O(zero × one)</p>