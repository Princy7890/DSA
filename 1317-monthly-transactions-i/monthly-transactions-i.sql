# Write your MySQL query statement below
select 
DATE_FORMAT(trans_date,'%Y-%m') as month,
t.country,
count(t.state) as trans_count,
sum(t.state='approved') as approved_count,
sum(t.amount) as trans_total_amount,
sum(if(state='approved',amount,0)) as approved_total_amount

from Transactions t
group by Date_format(trans_date,'%Y-%m'),country