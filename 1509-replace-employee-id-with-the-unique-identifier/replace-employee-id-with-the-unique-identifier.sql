# Write your MySQL query statement below

# return the results as unique_id  | name 


select u.unique_id, e.name
from Employees as e
LEFT JOIN 
EmployeeUNI as U 
ON e.id = u.id



