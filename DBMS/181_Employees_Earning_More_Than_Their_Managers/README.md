<h2><a href="https://leetcode.com/problems/employees-earning-more-than-their-managers">181. Employees Earning More Than Their Managers</a></h2><h3>Easy</h3><hr><p>Table: <code>Employee</code></p>

<pre>
+-------------+---------+
| Column Name | Type    |
+-------------+---------+
| id          | int     |
| name        | varchar |
| salary      | int     |
| managerId   | int     |
+-------------+---------+
id is the primary key (column with unique values) for this table.
Each row of this table indicates the ID of an employee, their name, salary, and the ID of their manager.
</pre>

<p>Write a solution to find the employees who earn more than their managers.</p>

<p>Return the result table in any order.</p>

<p>The result format is in the following example.</p>