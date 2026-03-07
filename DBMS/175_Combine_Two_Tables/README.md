<h2><a href="https://leetcode.com/problems/combine-two-tables">175. Combine Two Tables</a></h2><h3>Easy</h3><hr><p>Table: <code>Person</code></p>

<pre>
+-------------+---------+
| Column Name | Type    |
+-------------+---------+
| personId    | int     |
| lastName    | varchar |
| firstName   | varchar |
+-------------+---------+
personId is the primary key (column with unique values) for this table.
</pre>

<p>Table: <code>Address</code></p>

<pre>
+-------------+---------+
| Column Name | Type    |
+-------------+---------+
| addressId   | int     |
| personId    | int     |
| city        | varchar |
| state       | varchar |
+-------------+---------+
addressId is the primary key for this table.
</pre>

<p>Write a solution to report the first name, last name, city, and state of each person in the <code>Person</code> table. If the address of a personId is not present in the <code>Address</code> table, report <code>null</code> instead.</p>

<p>Return the result table in any order.</p>