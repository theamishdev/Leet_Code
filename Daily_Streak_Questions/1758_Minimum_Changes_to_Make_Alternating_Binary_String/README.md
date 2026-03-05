<h1>1758. Minimum Changes To Make Alternating Binary String</h1>

<p>
Given a string <b>s</b> consisting only of characters <b>'0'</b> and <b>'1'</b>, 
you may change any character from <b>0 → 1</b> or <b>1 → 0</b>.
</p>

<p>
Return the minimum number of changes required to make the string alternating.
</p>

<p>An alternating string is one of the following:</p>

<ul>
<li>010101...</li>
<li>101010...</li>
</ul>

<hr>

<h2>Example 1</h2>

<pre>
Input: s = "0100"
Output: 1
</pre>

<h2>Example 2</h2>

<pre>
Input: s = "10"
Output: 0
</pre>

<h2>Example 3</h2>

<pre>
Input: s = "1111"
Output: 2
</pre>

<hr>

<h2>Approach</h2>

<p>
There are only two valid alternating patterns:
</p>

<ul>
<li>Starting with '0' → 010101...</li>
<li>Starting with '1' → 101010...</li>
</ul>

<p>
We compute how many changes are required for both patterns and return the minimum.
</p>

<hr>

<h2>Time Complexity</h2>

<p>O(n)</p>

<h2>Space Complexity</h2>

<p>O(1)</p>