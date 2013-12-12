<?php
/**
 * @file
 * imagex_widgets_code.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function imagex_widgets_code_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'imagex_widget_code';
  $bean_type->label = 'Code Widget';
  $bean_type->options = '';
  $bean_type->description = 'This is for Code used on the site, like PHP, JS, and Raw HTML without WYSIWYG.';
  $export['imagex_widget_code'] = $bean_type;

  return $export;
}
