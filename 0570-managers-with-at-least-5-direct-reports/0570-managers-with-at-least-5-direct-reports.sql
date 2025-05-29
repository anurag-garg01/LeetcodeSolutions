# Write your MySQL query statement below

SELECT name from employee where id in (
select managerId 
FROM Employee
GROUP BY managerId
HAVING COUNT(*) >=5)


# from 

# groupby 

# having 

# select 


# order - asc , desc 