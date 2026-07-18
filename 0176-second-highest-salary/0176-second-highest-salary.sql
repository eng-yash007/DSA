# Write your MySQL query statement below
SELECT (SELECT DISTINCT(salary) FROM Employee WHERE salary < (SELECT max(salary) FROM Employee) ORDER BY salary desc LIMIT 1) AS SecondHighestSalary;