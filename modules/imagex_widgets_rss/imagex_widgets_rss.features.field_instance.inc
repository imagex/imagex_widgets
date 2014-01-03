<?php
/**
 * @file
 * imagex_widgets_rss.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function imagex_widgets_rss_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'bean-imagex_widget_rss-field_cache_lifetime'
  $field_instances['bean-imagex_widget_rss-field_cache_lifetime'] = array(
    'bundle' => 'imagex_widget_rss',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'How often should the feed be updated? Enter a value in minutes that determines how often the feed will refresh.',
    'display' => array(
      'bucket_bar' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 2,
      ),
      'landing_page' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'mega_menu' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_cache_lifetime',
    'label' => 'Cache Lifetime',
    'required' => 0,
    'settings' => array(
      'max' => 99999,
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 33,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'bean-imagex_widget_rss-field_image'
  $field_instances['bean-imagex_widget_rss-field_image'] = array(
    'bundle' => 'imagex_widget_rss',
    'deleted' => 0,
    'description' => 'Optional image.  A single image representing the  entire feed.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_image',
    'label' => 'Feed Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'filefield_paths' => array(
        'active_updating' => 0,
        'file_name' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => '[file:ffp-name-only-original].[file:ffp-extension-original]',
        ),
        'file_path' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => '',
        ),
        'retroactive_update' => 0,
      ),
      'filefield_paths_enabled' => 1,
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '75x75',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'feed' => 0,
          'http' => 0,
          'https' => 0,
          'public' => 'public',
          'youtube' => 0,
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_browser_plus--media_browser_my_files' => 'media_browser_plus--media_browser_my_files',
          'media_browser_plus--media_browser_thumbnails' => 'media_browser_plus--media_browser_thumbnails',
          'media_default--media_browser_1' => 0,
          'media_default--media_browser_my_files' => 0,
          'media_internet' => 'media_internet',
          'remote_file' => 0,
          'upload' => 'upload',
          'youtube' => 0,
        ),
        'progress_indicator' => 'throbber',
      ),
      'type' => 'media_generic',
      'weight' => 35,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'bean-imagex_widget_rss-field_show_description'
  $field_instances['bean-imagex_widget_rss-field_show_description'] = array(
    'bundle' => 'imagex_widget_rss',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'When checked, all feed descriptions will be excluded from display.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_show_description',
    'label' => 'Exclude Description',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 36,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'bean-imagex_widget_rss-field_widget_feed_link'
  $field_instances['bean-imagex_widget_rss-field_widget_feed_link'] = array(
    'bundle' => 'imagex_widget_rss',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'bucket_bar' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 0,
      ),
      'landing_page' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'mega_menu' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_widget_feed_link',
    'label' => 'Feed Link',
    'required' => 1,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'none',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 31,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'bean-imagex_widget_rss-field_widget_item_count'
  $field_instances['bean-imagex_widget_rss-field_widget_item_count'] = array(
    'bundle' => 'imagex_widget_rss',
    'default_value' => array(
      0 => array(
        'value' => 4,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'bucket_bar' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 1,
      ),
      'landing_page' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'mega_menu' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_widget_item_count',
    'label' => 'Items to Show',
    'required' => 1,
    'settings' => array(
      'max' => 25,
      'min' => 1,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 32,
    ),
    'workbench_access_field' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Cache Lifetime');
  t('Exclude Description');
  t('Feed Image');
  t('Feed Link');
  t('How often should the feed be updated? Enter a value in minutes that determines how often the feed will refresh.');
  t('Items to Show');
  t('Optional image.  A single image representing the  entire feed.');
  t('When checked, all feed descriptions will be excluded from display.');

  features_alter_code('field_instance', $field_instances);

  return $field_instances;
}
