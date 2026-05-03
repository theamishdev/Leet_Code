<h2><a href="https://leetcode.com/problems/rotated-digits">788. Rotated Digits</a></h2><h3>Medium</h3><hr><p>An integer <code>x</code> is a <strong>good number</strong> if after rotating each digit individually by 180 degrees, we get a valid number that is different from <code>x</code>.</p>

<p>Each digit must be rotated - we cannot choose to leave it alone.</p>

<p>A number is valid if each digit remains a digit after rotation. For example:</p>

<ul>
	<li><code>0, 1, 8</code> rotate to themselves</li>
	<li><code>2 ↔ 5</code>, <code>6 ↔ 9</code></li>
	<li><code>3, 4, 7</code> are invalid</li>
</ul>

<p>Given an integer <code>n</code>, return the number of <strong>good numbers</strong> in the range <code>[1, n]</code>.</p>

<p>&nbsp;</p>

<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> n = 10
<strong>Output:</strong> 4
<strong>Explanation:</strong> Good numbers are [2,5,6,9]
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> n = 1
<strong>Output:</strong> 0
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> n = 2
<strong>Output:</strong> 1
</pre>

<p>&nbsp;</p>

<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 ≤ n ≤ 10<sup>4</sup></code></li>
</ul>