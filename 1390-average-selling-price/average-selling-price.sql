# Write your MySQL query statement below

#select p.product_id, IFNULL(round((sum(p.price * u.units)/sum(u.units)),2),0) as average_price from UnitsSold u,Prices p where u.product_id = p.product_id and u.purchase_date between p.start_date and p.end_date or isnull(u.purchase_date) group by p.product_id;

select p.product_id, IFNULL(round((sum(p.price * u.units)/sum(u.units)),2),0) as average_price from Prices p left join UnitsSold u on u.product_id = p.product_id and u.purchase_date between p.start_date and p.end_date group by p.product_id;