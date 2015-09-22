<?php
/**
 * @file
 * gsb_feature_links_fpp.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gsb_feature_links_fpp_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_show_more|fieldable_panels_pane|links|default';
  $field_group->group_name = 'group_show_more';
  $field_group->entity_type = 'fieldable_panels_pane';
  $field_group->bundle = 'links';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '1',
    'children' => array(
      0 => 'field_link_unlimited',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'classes' => 'show-more-less show-more-less-num-4 show-more-less-min-6 field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_show_more|fieldable_panels_pane|links|default'] = $field_group;

  return $export;
}
