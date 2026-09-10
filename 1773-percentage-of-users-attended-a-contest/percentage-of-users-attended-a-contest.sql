# Write your MySQL query statement below
select r.contest_id ,  ROUND( (COUNT(r.user_id) * 100) / (SELECT COUNT(*) FROM Users)
    , 2) AS percentage
 from  register r join users u
 on r.user_id = u.user_id
 GROUP BY r.contest_id
 order  by percentage desc, r.contest_id ;

