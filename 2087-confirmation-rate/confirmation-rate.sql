# Write your MySQL query statement below
select a.user_id,ifnull(round(sum(action='confirmed')/count(*),2),0.00) as confirmation_rate
from Signups a
left join
Confirmations b
on a.user_id=b.user_id
group by a.user_id;