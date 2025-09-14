package com.example.finalProject.finalProject.Service;

import com.example.finalProject.finalProject.Entities.Role;
import java.util.List;

public interface RoleService {
    // CRUD operations
    Role addRole(Role role);
    Role updateRole(Long roleId, Role updatedRole);
    void deleteRole(Long roleId);
    Role getRoleById(Long roleId);
    List<Role> getAllRoles();
}
