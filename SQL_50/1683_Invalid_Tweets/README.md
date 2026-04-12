<h2><a href="https://leetcode.com/problems/invalid-tweets">1683. Invalid Tweets</a></h2><h3>Easy</h3><hr><p>Table: <code>Tweets</code></p>

<pre>
+---------------+---------+
| Column Name   | Type    |
+---------------+---------+
| tweet_id      | int     |
| content       | varchar |
+---------------+---------+
tweet_id is the primary key (column with unique values) for this table.
</pre>

<p>Write a solution to find the IDs of the invalid tweets. The tweet is invalid if the number of characters used in the content of the tweet is strictly greater than <code>15</code>.</p>

<p>Return the result table in any order.</p>