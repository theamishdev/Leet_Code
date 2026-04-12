<h2><a href="https://leetcode.com/problems/find-customer-referee">584. Find Customer Referee</a></h2><h3>Easy</h3><hr><p>Table: <code>Customer</code></p>

<pre>
+-------------+---------+
| Column Name | Type    |
+-------------+---------+
| id          | int     |
| name        | varchar |
| referee_id  | int     |
+-------------+---------+
id is the primary key (column with unique values) for this table.
Each row of this table indicates the id of a customer, their name, and the id of the customer who referred them.
</pre>

<p>Find the names of the customers that are not referred by the customer with <code>id = 2</code>.</p>

<p>Return the result table in any order.</p>