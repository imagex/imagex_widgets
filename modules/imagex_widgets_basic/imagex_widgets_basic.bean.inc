<?php
/**
 * @file
 * imagex_widgets_basic.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function imagex_widgets_basic_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'imagex_widget_basic';
  $bean_type->label = 'Basic Text and HTML Widget';
  $bean_type->options = '';
  $bean_type->description = 'A basic widget that allows for simple text and HTML markup to be placed within and rendered.';
  $export['imagex_widget_basic'] = $bean_type;

  return $export;
}
