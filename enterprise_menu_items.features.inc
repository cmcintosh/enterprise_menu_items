<?php
/**
 * @file
 * enterprise_menu_items.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function enterprise_menu_items_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function enterprise_menu_items_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function enterprise_menu_items_node_info() {
  $items = array(
    'menu_item' => array(
      'name' => t('Menu Item'),
      'base' => 'node_content',
      'description' => t('Create a new menu item for the site.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
