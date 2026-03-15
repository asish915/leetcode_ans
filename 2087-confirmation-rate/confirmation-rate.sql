# Write your MySQL query statement below

#select s.user_id,round(count(c.action = 'confirmed')/count(c.action),2) as confirmation_rate from signups s,confirmations c where s.user_id = c.user_id group by s.user_id;

select s.user_id,round(avg(if(c.action = 'confirmed',1,0)),2) as confirmation_rate from signups s left join confirmations c on s.user_id = c.user_id group by s.user_id;