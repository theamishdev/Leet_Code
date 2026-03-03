<h2><a href="https://leetcode.com/problems/find-kth-bit-in-nth-binary-string">1545. Find Kth Bit in Nth Binary String</a></h2><h3>Medium</h3><hr><p>Given two positive integers <code>n</code> and <code>k</code>, the binary string <code>S_n</code> is formed as follows:</p>

<ul>
	<li><code>S_1 = "0"</code></li>
	<li><code>S_i = S_{i-1} + "1" + reverse(invert(S_{i-1}))</code> for <code>i &gt; 1</code></li>
</ul>

<p>Return the <code>k</code><sup>th</sup> bit in <code>S_n</code>. It is guaranteed that <code>k</code> is valid for the given <code>n</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> n = 3, k = 1
<strong>Output:</strong> "0"
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> n = 4, k = 11
<strong>Output:</strong> "1"
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 20</code></li>
	<li><code>1 &lt;= k &lt;= 2<sup>n</sup> - 1</code></li>
</ul>