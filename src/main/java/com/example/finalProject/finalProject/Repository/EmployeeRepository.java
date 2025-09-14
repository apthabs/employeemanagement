package com.example.finalProject.finalProject.Repository;

import com.example.finalProject.finalProject.Entities.Employee;
import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.stereotype.Repository;

import java.util.List;

@Repository
public interface EmployeeRepository extends JpaRepository<Employee, Long> {
    // Customer query to find Active employees
    List<Employee> findByActiveTrue();

    //Customer query to find employees by department
    List<Employee> findByDepartmentId(Long departmentId);

    // Custom query to find employees by role
    List<Employee> findByRoleId(Long roleId);
}
