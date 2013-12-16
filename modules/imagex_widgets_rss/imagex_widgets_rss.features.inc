<?php
/**
 * @file
 * imagex_widgets_rss.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function imagex_widgets_rss_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
}
