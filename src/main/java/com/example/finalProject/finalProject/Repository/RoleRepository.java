package com.example.finalProject.finalProject.Repository;

import com.example.finalProject.finalProject.Entities.Role;
import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.stereotype.Repository;
import java.util.Optional;

@Repository
public interface RoleRepository extends JpaRepository<Role,Long> {
    // Custom query to find role by name
    Optional<Role> findByName(String name);
}
