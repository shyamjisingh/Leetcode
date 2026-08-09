# Write your MySQL query statement below
-- SELECT 
--     score,
--     DENSE_RANK() OVER (ORDER BY score DESC) AS "rank"
-- FROM 
--     Scores
-- ORDER BY 
--     score DESC;
SELECT 
    Main_Table.score,
    (
        SELECT COUNT(DISTINCT Check_Table.score) 
        FROM Scores Check_Table 
        WHERE Check_Table.score >= Main_Table.score
    ) AS 'rank'
FROM 
    Scores Main_Table
ORDER BY 
    Main_Table.score DESC;