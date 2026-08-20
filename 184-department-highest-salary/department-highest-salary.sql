# Write your MySQL query statement below
-- SELECT 
--     d.name AS Department, 
--     e.name AS Employee, 
--     e.salary AS Salary
-- FROM 
--     Employee e
-- JOIN 
--     Department d ON e.departmentId = d.id    
-- WHERE 
--     (e.departmentId, e.salary) IN (           
--         SELECT departmentId, MAX(salary)       
--         FROM Employee
--         GROUP BY departmentId
    -- );

    -- SELECT departmentId, MAX(salary) AS max_salary
    --  FROM Employee
    --  GROUP BY departmentId

SELECT 
    d.name AS Department, 
    e.name AS Employee, 
    e.salary AS Salary
FROM 
    Employee e
JOIN 
    Department d ON e.departmentId = d.id 
join (
     SELECT departmentId, MAX(salary) AS max_salary
     FROM Employee
     GROUP BY departmentId

)  as ms on e.departmentId = ms.departmentId AND e.salary = ms.max_salary;

