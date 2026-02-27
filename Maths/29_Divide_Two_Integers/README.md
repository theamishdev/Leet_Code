<h2><a href="https://leetcode.com/problems/divide-two-integers">29. Divide Two Integers</a></h2><h3>Medium</h3><hr><p>Given two integers <code>dividend</code> and <code>divisor</code>, divide two integers without using multiplication, division, and mod operator.</p>

<p>The integer division should truncate toward zero, which means losing its fractional part. For example, <code>8.345</code> would be truncated to <code>8</code>, and <code>-2.7335</code> would be truncated to <code>-2</code>.</p>

<p>Return the quotient after dividing <code>dividend</code> by <code>divisor</code>.</p>

<p><strong>Note:</strong> Assume we are dealing with an environment that could only store integers within the 32-bit signed integer range: <code>[−2<sup>31</sup>, 2<sup>31</sup> − 1]</code>. For this problem, if the quotient is strictly greater than <code>2<sup>31</sup> − 1</code>, then return <code>2<sup>31</sup> − 1</code>, and if the quotient is strictly less than <code>−2<sup>31</sup></code>, then return <code>−2<sup>31</sup></code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> dividend = 10, divisor = 3
<strong>Output:</strong> 3
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> dividend = 7, divisor = -3
<strong>Output:</strong> -2
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>-2<sup>31</sup> &lt;= dividend, divisor &lt;= 2<sup>31</sup> - 1</code></li>
	<li><code>divisor != 0</code></li>
</ul>
