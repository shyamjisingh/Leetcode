# Write your MySQL query statement below


SELECT 
    ROUND( COUNT(A2.player_id) / (SELECT COUNT(DISTINCT player_id) FROM Activity) , 2) AS fraction
FROM
(SELECT player_id, MIN(event_date) AS first_date FROM Activity GROUP BY player_id ) A1
JOIN Activity A2 
    ON A1.player_id = A2.player_id AND DATEDIFF(A2.event_date, A1.first_date) = 1;