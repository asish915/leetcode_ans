# Write your MySQL query statement below

# id % 2 != 0 -> ODD number
select * from CINEMA where mod(id,2) != 0 and description != 'boring' order by rating desc;