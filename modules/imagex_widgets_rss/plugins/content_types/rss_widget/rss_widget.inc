<?php

/**
 * @file
 * Plugin for rss widget as panel panes.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'edit text' => t('Configure'),
  'title' => t('RSS Feed Widget'),
  'single' => TRUE,
  'defaults' => array(
    'bid' => '',
    'view_mode' => '',
  ),
  'icon' => 'icon_widget_rss.png',
  'description' => t('Add a rss feed widget.'),
  'category' => t('Widgets'),
);

/**
 * 'Admin title' callback for the content type.
 */
function imagex_widgets_rss_rss_widget_content_type_admin_title($subtype = NULL, $conf = NULL, $context = NULL) {
  return t('RSS Feed Widget');
}

/**
 * 'Admin info' callback for the content type.
 */
function imagex_widgets_rss_rss_widget_content_type_admin_info($subtype = NULL, $conf = NULL, $context = NULL) {
  $block = new stdClass();
  $block->title = t('RSS Feed Widget');

  return $block;
}

/**
 * Run-time rendering of the body of the block.
 */
function imagex_widgets_rss_rss_widget_content_type_render($subtype, $conf, $panel_args, &$context) {

  // Load bean object.
  $bean = bean_load($conf['bid']);

  $view_mode = !empty($conf['view_mode']) ? $conf['view_mode'] : 'full';
  
  if (!empty($bean)) {
    $output = bean_view($bean, $view_mode);
  }

  // Configure the block output.
  $block = new stdClass();
  $block->module = 'imagex_widgets_rss';
  $block->title = $conf['override_title'] ? $conf['override_title_text'] : $bean->title;
  $block->content = @$output ?: t('No content');
  $block->delta = $conf['bid'];

  return $block;
}

/**
 * 'Edit form' callback for the content type.
 */
function imagex_widgets_rss_rss_widget_content_type_edit_form($form, &$form_state) {
  $conf = $form_state['conf'];

  // Get all bean of type news.
  $query = new EntityFieldQuery();
  $beans = $query->entityCondition('entity_type', 'bean')
    ->propertyCondition('type', 'isu_widget_rss')
    ->execute();

  // Get settings from bean and transfer to form configuration to pass on to
  // rendering stage.
  if (isset($beans['bean'])) {
    foreach ($beans['bean'] as $bean) {
      $bean = bean_load($bean->bid);

      // Populate options for bean select.
      $bean_options[$bean->bid] =  "<span class='label'>$bean->label</span>" ;
    }
  }

  $view_mode_options = array();
  $entity_info = entity_get_info('bean');
  $view_mode_keys = array_keys($entity_info['view modes']);

  foreach ($view_mode_keys as $key) {
    $view_mode_options[$key] = $entity_info['view modes'][$key]['label'];
  }

  // Add a stylesheet for the radio select.
  $path = drupal_get_path('module', 'imagex_widgets_rss') . '/plugins/content_types/rss_widget';
  drupal_add_css($path . '/css/rss_widget.css');

  // Select a bean.
  $form['bid'] = array(
    '#attributes' => array('class' => array('rss-bid-radio')),
    '#type' => 'radios',
    '#default_value' => $conf['bid'],
    '#title' => t('RSS Feed'),
    '#options' => $bean_options,
    '#description' => t('Please select the RSS Feed widget you would like to display.'),
  );
  // Select a view_mode.
  $form['view_mode'] = array(
    '#attributes' => array('class' => array('rss-view-mode')),
    '#type' => 'select',
    '#default_value' => $conf['view_mode'],
    '#title' => t('View Mode'),
    '#options' => $view_mode_options,
    '#description' => t('Please select the view mode you\'d like to use to display the bean.'),
  );

  return $form;

}

/**
 * 'Edit form' submit callback for the content type.
 */
function imagex_widgets_rss_rss_widget_content_type_edit_form_submit($form, &$form_state) {
  foreach (array_keys($form_state['plugin']['defaults']) as $key) {
    $form_state['conf'][$key] = $form_state['values'][$key];
  }
}
