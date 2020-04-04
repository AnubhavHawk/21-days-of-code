<<<<<<< HEAD
SELECT e1.ename FROM Employees e1 join Departments d1 ON 
=======
SELECT e1.ename FROM Employees e1 join Departments d1 ON 
>>>>>>> b1b540a4787d6edd6d8df0e1588dbe81fb1fe676
e1.deptId = d1.deptId WHERE d1.deptId = (SELECT d.deptId FROM Employees e join Departments d ON e.deptId = d.deptId AND e.eid = 108);