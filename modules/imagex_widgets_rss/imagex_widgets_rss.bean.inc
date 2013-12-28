<?php
/**
 * @file
 * imagex_widgets_rss.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function imagex_widgets_rss_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'imagex_widget_rss';
  $bean_type->label = 'RSS Feed Widget';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['imagex_widget_rss'] = $bean_type;

  features_alter_code('bean_type', $export);

  return $export;
}
