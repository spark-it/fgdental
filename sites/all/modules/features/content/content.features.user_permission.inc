<?php
/**
 * @file
 * content.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function content_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'administer files'.
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(),
    'module' => 'file_entity',
  );

  // Exported permission: 'create files'.
  $permissions['create files'] = array(
    'name' => 'create files',
    'roles' => array(),
    'module' => 'file_entity',
  );

  // Exported permission: 'create pagina_basica content'.
  $permissions['create pagina_basica content'] = array(
    'name' => 'create pagina_basica content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any pagina_basica content'.
  $permissions['delete any pagina_basica content'] = array(
    'name' => 'delete any pagina_basica content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own pagina_basica content'.
  $permissions['delete own pagina_basica content'] = array(
    'name' => 'delete own pagina_basica content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any pagina_basica content'.
  $permissions['edit any pagina_basica content'] = array(
    'name' => 'edit any pagina_basica content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own pagina_basica content'.
  $permissions['edit own pagina_basica content'] = array(
    'name' => 'edit own pagina_basica content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'view files'.
  $permissions['view files'] = array(
    'name' => 'view files',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  return $permissions;
}
