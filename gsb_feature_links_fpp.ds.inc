<?php
/**
 * @file
 * gsb_feature_links_fpp.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function gsb_feature_links_fpp_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'fieldable_panels_pane|links|default';
  $ds_layout->entity_type = 'fieldable_panels_pane';
  $ds_layout->bundle = 'links';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_title',
        1 => 'group_show_more',
        2 => 'field_link_unlimited',
      ),
    ),
    'fields' => array(
      'field_title' => 'ds_content',
      'group_show_more' => 'ds_content',
      'field_link_unlimited' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['fieldable_panels_pane|links|default'] = $ds_layout;

  return $export;
}
