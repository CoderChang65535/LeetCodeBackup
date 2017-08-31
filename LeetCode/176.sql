#pragma once
/*
 *
 */
select max(salary) as SecondHighestSalary
from employee
where salary < (select max(Salary) from Employee)
