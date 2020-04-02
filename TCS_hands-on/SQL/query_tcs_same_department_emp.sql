SELECT e1.ename FROM Employees e1 join Departments d1 ON 
e1.deptId = d1.deptId WHERE d1.deptId = (SELECT d.deptId FROM Employees e join Departments d ON e.deptId = d.deptId AND e.eid = 108);