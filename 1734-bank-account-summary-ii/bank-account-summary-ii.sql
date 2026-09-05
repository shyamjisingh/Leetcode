# Write your MySQL query statement below
select Users.name , sum(Transactions.amount) as balance 
from Users join Transactions on Transactions.account= Users.account
group by Transactions.account
having  sum(Transactions.amount)>10000;