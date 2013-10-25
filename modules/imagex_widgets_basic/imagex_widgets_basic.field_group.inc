<?php
/**
 * @file
 * imagex_widgets_basic.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function imagex_widgets_basic_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_widget_settings_revisions|bean|imagex_widget_basic|form';
  $field_group->group_name = 'group_widget_settings_revisions';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'imagex_widget_basic';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_widget_settings';
  $field_group->data = array(
    'label' => 'Revisions',
    'weight' => '8',
    'children' => array(
      0 => 'revision',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-widget-settings-revisions field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_widget_settings_revisions|bean|imagex_widget_basic|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_widget_settings_viewmode|bean|imagex_widget_basic|form';
  $field_group->group_name = 'group_widget_settings_viewmode';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'imagex_widget_basic';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_widget_settings';
  $field_group->data = array(
    'label' => 'View mode',
    'weight' => '7',
    'children' => array(
      0 => 'view_mode',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-widget-settings-viewmode field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_widget_settings_viewmode|bean|imagex_widget_basic|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_widget_settings|bean|imagex_widget_basic|form';
  $field_group->group_name = 'group_widget_settings';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'imagex_widget_basic';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Settings',
    'weight' => '8',
    'children' => array(
      0 => 'redirect',
      1 => 'group_widget_settings_viewmode',
      2 => 'group_widget_settings_revisions',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_widget_settings|bean|imagex_widget_basic|form'] = $field_group;

  return $export;
}
