# Write your MySQL query statement below

select w1.id from weather w  join weather w1 on datediff (w.recordDate , w1.recordDate) = -1 and w1.temperature > w.temperature; 