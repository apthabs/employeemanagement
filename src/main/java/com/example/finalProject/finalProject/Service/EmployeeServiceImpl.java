package com.example.finalProject.finalProject.Service;


import com.example.finalProject.finalProject.Entities.Employee;
import com.example.finalProject.finalProject.Exceptions.ResourceNotFoundException;
import com.example.finalProject.finalProject.Repository.EmployeeRepository;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import java.util.List;

@Service
public class EmployeeServiceImpl  implements EmployeeService{

    @Autowired
    private EmployeeRepository employeeRepository;

    @Override
    public Employee addEmployee(Employee employee) {
        return employeeRepository.save(employee);
    }

    @Override
    public Employee updateEmployee(Long employeeId, Employee updatedEmployee) {
        Employee existingEmployee = employeeRepository.findById(employeeId)
                .orElseThrow();
        existingEmployee.setName(updatedEmployee.getName());
        existingEmployee.setEmail(updatedEmployee.getEmail());
        existingEmployee.setActive(updatedEmployee.isActive());
        existingEmployee.setDepartment(updatedEmployee.getDepartment());
        existingEmployee.setRole(updatedEmployee.getRole());
        return employeeRepository.save(existingEmployee);
    }

    @Override
    public void deleteEmployee(Long employeeId) {
        Employee e = employeeRepository.findById(employeeId).get();

        if (e==null) {
            throw new ResourceNotFoundException("Employee Not Found");
        }
        employeeRepository.deleteById(employeeId);
    }

    @Override
    public Employee getEmployeeById(Long employeeId) {
        return employeeRepository.findById(employeeId)
                .orElseThrow(() -> new ResourceNotFoundException("Employee not found with ID: " + employeeId));
    }

    @Override
    public List<Employee> getAllEmployees() {
        return employeeRepository.findAll();
    }

    @Override
    public List<Employee> getEmployeesByDepartment(Long departmentId) {
        return employeeRepository.findByDepartmentId(departmentId);
    }

    @Override
    public List<Employee> getEmployeesByRole(Long roleId) {
        return employeeRepository.findByRoleId(roleId);
    }

    @Override
    public List<Employee> getActiveEmployees() {
        return employeeRepository.findByActiveTrue();
    }
}
