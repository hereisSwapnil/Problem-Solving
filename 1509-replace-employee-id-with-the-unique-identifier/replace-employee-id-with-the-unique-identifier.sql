# Write your MySQL query statement below
SELECT eui.unique_id AS unique_id, e.name AS name from Employees AS e LEFT JOIN EmployeeUNI AS eui ON e.id=eui.id;