<?php
/**
 * @file
 * imagex_widgets_basic_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function imagex_widgets_basic_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create any imagex_widget_basic bean'.
  $permissions['create any imagex_widget_basic bean'] = array(
    'name' => 'create any imagex_widget_basic bean',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any imagex_widget_basic bean'.
  $permissions['delete any imagex_widget_basic bean'] = array(
    'name' => 'delete any imagex_widget_basic bean',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any imagex_widget_basic bean'.
  $permissions['edit any imagex_widget_basic bean'] = array(
    'name' => 'edit any imagex_widget_basic bean',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any imagex_widget_basic bean'.
  $permissions['view any imagex_widget_basic bean'] = array(
    'name' => 'view any imagex_widget_basic bean',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  return $permissions;
}
