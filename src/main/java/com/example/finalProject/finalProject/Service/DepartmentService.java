package com.example.finalProject.finalProject.Service;

import com.example.finalProject.finalProject.Entities.Department;
import java.util.List;

public interface DepartmentService {

    // CRUD operations
    Department addDepartment(Department department);
    Department updateDepartment(Long departmentId, Department updatedDepartment);
    void deleteDepartment(Long departmentId);
    Department getDepartmentById(Long departmentId);
    List<Department> getAllDepartments();
}
