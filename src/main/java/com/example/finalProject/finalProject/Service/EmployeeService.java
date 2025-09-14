package com.example.finalProject.finalProject.Service;

import com.example.finalProject.finalProject.Entities.Employee;
import java.util.List;

public interface EmployeeService {

    // CRUD operations
    Employee addEmployee(Employee employee);
    Employee updateEmployee(Long employeeId, Employee updatedEmployee);
    void deleteEmployee(Long employeeId);
    Employee getEmployeeById(Long employeeId);
    List<Employee> getAllEmployees();

    // Additional operations
    List<Employee> getEmployeesByDepartment(Long departmentId);
    List<Employee> getEmployeesByRole(Long roleId);
    List<Employee> getActiveEmployees();
}
