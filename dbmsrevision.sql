create database employee;

create table employee(
    roll_no int primary key,
    name varchar(15),
    date_joining datetime,
    salary decimal(10,2),
    phone varchar(50)

);


insert into employee(roll_no,name,date_joining,salary,phone) values
(123,'yash',12/10/2005 9.00.00,123,244355353),
(123,'yash',12/10/2005 9.00.00,123,244355353);

select *from worker;

-- 2. Structure + Data (Both) copy
create table new_table as select * from old_table;

-- Sirf Structure (No Data)
create table new_table as select * from old_table where 0=1;

-- highest salary  2 & 3 using imit and offset

select first_names,salary from employee
order by salary desc limit 1,1; 
  or
 limit 2,1 
  or
 limit 1 offset 1
  or 
limit 1 offset 2;

-- highest salary  2 & 3 using subquery

select max(salary)
from employee where salary<(select max(salary)from employee);

SELECT MAX(salary)
FROM employee
WHERE salary < (
    SELECT MAX(salary)
    FROM employee
    WHERE salary < (
        SELECT MAX(salary)
        FROM employee
    )
);


-- 5. What Is The SQL Query Used To Find All Employees
--      Who Also Hold The Managerial Position?

select * from worker where worker_id
in(select distinct manager_id from worker
 where manager_id is not null);

select distinct w.*
from worker w
join worker m on worker_id=manager_id;

-- 6. What Is The SQL Query Used To Find The Names Of 
--      The Employees That Begin With ‘A’?

select emp_name from employee where name like 'A%';

-- 7. What Is The SQL Query Used To Display 
--      The Current Date?

seect now();

-- 8(i). What Is The SQL Query Used To Fetch Alternate
--           Records From A Table?

select *from employee where id%2=0;
select *from employee where id%2=1;

-- 8(ii). What Is The SQL Query Used To Fetch The
--    Common Records From Two Tables?

select * from employee  e
inner join  worker d on e.id=d.id;

-- AS lagao ya na lagao → koi farq nahi, bas readability ke liye hota hai.

-- 9(i). What Is The SQL Query Used To Find Duplicate
--    Rows In Table?                   COUNT(*) → sabhi rows count (fastest and most common).COUNT(DISTINCT column) → unique values count.

select name count(*)
from employee 
group by name  having count(*)>1;

-- 9(ii). What Is The SQL Query Used To Remove The
--    Duplicate Rows In Table?

delete e1
from employee e1
inner join employee e2
where e1.id<e2.id and e1.name=e2.name;

-- 10. What Is The SQL Query Used To Find 
-- The nth Record From A Table?

select *from employee
order by id limit 1 offset (n-1); or limit n-1,1;

-- 11(i). What Is The SQL Query Used To Find 
--      The First 5 Records From A Table?

select * from employee limit 5;

-- 11(ii). What Is The SQL Query Used To Find 
--      The Last 5 Records From A Table?

select * from employee order by id desc limit 5;

-- 12. What Is The SQL Query Used To Find 
-- The First Or Last Record From A Table?

select * from employee order by id limit 1;
select * from employee order by id desc limit 1;

-- 13. What Is The SQL Query Used To Find The Distinct
-- Records Without Using Distinct Keyword?

select name from employee group by name;

-- 14. What Is The SQL Query Used To Find The
-- Maximum Salary Of Each Department?

select dept_id max(salary) from employee 
group by dept_id;

-- 16. How Will You Change The Datatype Of A Column?

alter table employee modify salary decimal(10,2);

-- Question: Worker table me se un logon ka data nikalo jinke naam Yash, Amit ya

select * from worker where first_name in('yash','amit');














-- ✅ Window Functions  
-- 1. Window Functions  A window function performs a calculation across a set of rows related to the current row,
--  but without collapsing rows (unlike GROUP BY).

-- Ranking employees (ROW_NUMBER, RANK, DENSE_RANK)

-- Running totals (SUM() OVER)

-- Moving averages

-- ✅ CTEs   2. Common Table Expressions (CTEs)

-- Simplify complex queries

-- Recursive queries (like hierarchy, org chart, tree traversal)

-- Reusing the same subquery multiple times

-- ✅ LAG() / LEAD()

-- Compare a row with the previous/next row (salary trends, sales growth)

-- Find differences between current and previous month sales

-- Detect gaps in sequences










-- 🔹 1. Basic Filtering (WHERE)
-- Q1. Worker table me se un logon ka record nikalo jinka naam Yash hai.
-- SELECT * 
-- FROM worker 
-- WHERE first_name = 'Yash';

-- Q2. Sabhi workers ka record nikalo jinki salary 50000 se zyada hai.
-- SELECT * 
-- FROM worker 
-- WHERE salary > 50000;

-- Q3. Worker table me se un sabhi logon ka naam nikalo jinka department 'HR' hai.
-- SELECT first_name 
-- FROM worker 
-- WHERE department = 'HR';
-- 🔹 2. Pattern Matching (LIKE)

-- Q4. Un workers ko nikalo jinka naam ‘A’ se start hota hai.

-- SELECT * 
-- FROM worker 
-- WHERE first_name LIKE 'A%';


-- Q5. Un workers ko nikalo jinka naam ‘sh’ pe end hota hai.

-- SELECT * 
-- FROM worker 
-- WHERE first_name LIKE '%sh';


-- Q6. Un workers ko nikalo jinka naam me 'ya' shamil ho.

-- SELECT * 
-- FROM worker 
-- WHERE first_name LIKE '%ya%';

-- 🔹 3. Multiple Values (IN / NOT IN)

-- Q7. Un workers ko nikalo jinka naam Yash, Amit, Rahul me se koi ek hai.

-- SELECT * 
-- FROM worker 
-- WHERE first_name IN ('Yash', 'Amit', 'Rahul');


-- Q8. Un workers ko nikalo jo HR ya IT department me kaam karte hain.

-- SELECT * 
-- FROM worker 
-- WHERE department IN ('HR', 'IT');


-- Q9. Un workers ko nikalo jinka department Finance aur Admin me se nahi hai.

-- SELECT * 
-- FROM worker 
-- WHERE department NOT IN ('Finance', 'Admin');

-- 🔹 4. Sorting (ORDER BY)

-- Q10. Worker table ko salary ke descending order me sort karo.

-- SELECT * 
-- FROM worker 
-- ORDER BY salary DESC;


-- Q11. Top 3 highest salary wale workers nikalo.

-- SELECT * 
-- FROM worker 
-- ORDER BY salary DESC 
-- LIMIT 3;

-- 🔹 5. Aggregate Functions

-- Q12. Worker table se sabse zyada salary nikalo.

-- SELECT MAX(salary) 
-- FROM worker;


-- Q13. Worker table me kitne workers hai count karo.

-- SELECT COUNT(*) 
-- FROM worker;


-- Q14. Worker table se salary ka average nikalna hai.

-- SELECT AVG(salary) 
-- FROM worker;


-- Q15. Worker table se department-wise max salary nikalo.

-- SELECT department, MAX(salary) 
-- FROM worker 
-- GROUP BY department;

-- 🔹 6. Grouping (GROUP BY, HAVING)

-- Q16. Har department me total workers count karo.

-- SELECT department, COUNT(*) 
-- FROM worker 
-- GROUP BY department;


-- Q17. Har department me average salary nikalo.

-- SELECT department, AVG(salary) 
-- FROM worker 
-- GROUP BY department;


-- Q18. Sirf un departments ko dikhana hai jaha average salary > 50000 hai.

-- SELECT department, AVG(salary) AS avg_salary
-- FROM worker
-- GROUP BY department
-- HAVING AVG(salary) > 50000;

-- 🔹 7. Subqueries

-- Q19. Worker table se un workers ko nikalo jinki salary max salary ke barabar hai.

-- SELECT first_name, salary 
-- FROM worker 
-- WHERE salary = (SELECT MAX(salary) FROM worker);


-- Q20. Worker table se un workers ko nikalo jo IT department ke average salary se zyada kamate hain.

-- SELECT first_name, salary 
-- FROM worker 
-- WHERE salary > (
--     SELECT AVG(salary) 
--     FROM worker 
--     WHERE department = 'IT'
-- );

-- 🔹 8. Joins

-- Q21. Worker aur Department table ko join karke department name ke sath worker name nikalo.

-- SELECT w.first_name, d.department_name
-- FROM worker w
-- JOIN department d 
-- ON w.department_id = d.department_id;


-- Q22. Sabhi workers ke naam nikalo aur saath me unke manager ka naam bhi dikhayo (self join).

-- SELECT w.first_name AS worker_name, m.first_name AS manager_name
-- FROM worker w
-- JOIN worker m 
-- ON w.manager_id = m.worker_id;

-- Q24. Worker table se duplicate names dhoondo.

-- SELECT first_name, COUNT(*) 
-- FROM worker 
-- GROUP BY first_name 
-- HAVING COUNT(*) > 1;

-- Q25. Un workers ko nikalo jinki salary 40000 se 60000 ke beech hai.

-- SELECT * 
-- FROM worker 
-- WHERE salary BETWEEN 40000 AND 60000;

-- Q33. Worker ka naam uppercase me nikalo.

-- SELECT UPPER(first_name) 
-- FROM worker;


-- Q34. Worker ka naam lowercase me nikalo.

-- SELECT LOWER(first_name) 
-- FROM worker;


-- Q35. Worker ke naam ke pehle 3 characters nikalo.

-- SELECT SUBSTRING(first_name, 1, 3) 
-- FROM worker;


