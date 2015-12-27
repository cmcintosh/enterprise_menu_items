<?php
/**
 * @file
 * enterprise_menu_items.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function enterprise_menu_items_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_menu_content|node|menu_item|form';
  $field_group->group_name = 'group_menu_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'menu_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Main Content',
    'weight' => '0',
    'children' => array(
      0 => 'field_menu_category',
      1 => 'field_menu_item_body',
      2 => 'field_menu_popularity',
      3 => 'title',
      4 => 'field_menu_tags',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-menu-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_menu_content|node|menu_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_menu_media|node|menu_item|form';
  $field_group->group_name = 'group_menu_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'menu_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Media',
    'weight' => '1',
    'children' => array(
      0 => 'field_menu_images',
      1 => 'field_menu_featured_image',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-menu-media field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_menu_media|node|menu_item|form'] = $field_group;

  return $export;
}
