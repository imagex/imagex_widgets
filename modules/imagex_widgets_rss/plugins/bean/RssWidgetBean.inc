<?php
/**
 * @file
 * The Rss Block bean implementation.
 */

class RssWidgetBean extends BeanPlugin {
  public function view($bean, $content, $view_mode = 'default', $langcode = NULL) {  	
  	$url = $bean->field_widget_feed_link['und'][0]['url'];
  	$options['item_count'] = $bean->field_widget_item_count['und'][0]['value'];
  	$options['cache_lifetime'] = isset($bean->field_cache_lifetime['und']) ? $bean->field_cache_lifetime['und'][0]['value'] : null;

  	$vars['feeds'] = imagex_widgets_rss_get_rss_feed($url, $options);

  	unset($content['bean']);

  	$content['bean']['#markup'] = theme('imagex_widget_rss', $vars);
    
  	return $content;
  }
}