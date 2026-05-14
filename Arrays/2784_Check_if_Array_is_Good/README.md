<h1>2784. Check if Array is Good</h1>

<p>
You are given an integer array <b>nums</b>.
</p>

<p>
An array is considered <b>good</b> if it is a permutation of:
</p>

<pre>
[1, 2, ..., n - 1, n - 1]
</pre>

<p>
Return <b>true</b> if the array is good, otherwise return <b>false</b>.
</p>

<hr>

<h2>Example</h2>

<pre>
Input: nums = [2,1,3]
Output: false
</pre>

<pre>
Input: nums = [1,3,3,2]
Output: true
</pre>

<hr>

<h2>Approach</h2>

<p>
Sort the array and verify:
</p>

<ul>
<li>The first n-1 elements are exactly 1 to n-1</li>
<li>The last element is also n-1</li>
</ul>

<p>
If any condition fails, return false.
</p>

<hr>

<h2>Time Complexity</h2>

<p>O(n log n)</p>

<h2>Space Complexity</h2>

<p>O(1)</p>