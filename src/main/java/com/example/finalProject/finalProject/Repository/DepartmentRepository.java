package com.example.finalProject.finalProject.Repository;

import com.example.finalProject.finalProject.Entities.Department;
import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.stereotype.Repository;
import java.util.Optional;

@Repository
public interface DepartmentRepository extends JpaRepository<Department,Long> {

    // Custom query to find department by name
    Optional<Department> findByName(String name);
}
