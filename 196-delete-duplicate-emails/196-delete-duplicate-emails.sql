# Write your MySQL query statement below
DELETE a FROM Person AS a,Person AS b WHERE (a.email = b.email AND a.id >b.id) 