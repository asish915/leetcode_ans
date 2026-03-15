# Write your MySQL query statement below

select e.name from employee e,employee e1 where e.id = e1.managerId group by e1.managerId having count(e1.managerId) >= 5;