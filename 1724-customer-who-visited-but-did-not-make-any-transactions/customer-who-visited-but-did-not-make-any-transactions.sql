# Write your MySQL query statement below

select  Visits.customer_id ,count(*) as count_no_trans 
from Visits left join Transactions on Transactions.visit_id=Visits.visit_id
WHERE Transactions.transaction_id IS NULL
group by Visits.customer_id