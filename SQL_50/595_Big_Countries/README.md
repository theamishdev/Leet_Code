<h2><a href="https://leetcode.com/problems/big-countries">595. Big Countries</a></h2><h3>Easy</h3><hr><p>Table: <code>World</code></p>

<pre>
+-------------+---------+
| Column Name | Type    |
+-------------+---------+
| name        | varchar |
| continent   | varchar |
| area        | int     |
| population  | int     |
| gdp         | bigint  |
+-------------+---------+
name is the primary key (column with unique values) for this table.
</pre>

<p>A country is considered big if:</p>

<ul>
	<li>it has an area of at least <code>3000000</code> (i.e., <code>area >= 3000000</code>), or</li>
	<li>it has a population of at least <code>25000000</code> (i.e., <code>population >= 25000000</code>).</li>
</ul>

<p>Write a solution to find the name, population, and area of the big countries.</p>

<p>Return the result table in any order.</p>