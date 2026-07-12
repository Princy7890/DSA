# Write your MySQL query statement below
select q.query_name ,round(sum(q.rating/q.position)/count(q.position),2) as quality,
round(sum(q.rating<3)*100/count(q.position),2)as poor_query_percentage
from Queries q

group by query_name;