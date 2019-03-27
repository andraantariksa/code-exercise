SELECT employee.Name as Employee FROM Employee employee JOIN Employee employer ON employer.Id = employee.ManagerId WHERE employee.Salary > employer.Salary
