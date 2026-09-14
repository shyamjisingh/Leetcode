SELECT id, COUNT(*) AS num
FROM (
    SELECT requester_id AS id
    FROM RequestAccepted

    UNION all

    SELECT accepter_id AS id
    FROM RequestAccepted
) j
GROUP BY id
ORDER BY num DESC
LIMIT 1;