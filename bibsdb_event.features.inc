<?php
/**
 * @file
 * bibsdb_event.features.inc
 */

/**
 * Implements hook_views_api().
 */
function bibsdb_event_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_field_default_field_instances_alter().
 */
function bibsdb_event_field_default_field_instances_alter(&$data) {
  if (isset($data['node-ding_event-field_ding_event_list_image'])) {
    $data['node-ding_event-field_ding_event_list_image']['display']['search_result']['settings']['image_link'] = 'content'; /* WAS: '' */
    $data['node-ding_event-field_ding_event_list_image']['display']['search_result']['settings']['styles']['breakpoint_1'] = 768; /* WAS: '' */
    $data['node-ding_event-field_ding_event_list_image']['display']['search_result']['settings']['styles']['breakpoint_2'] = 500; /* WAS: '' */
    $data['node-ding_event-field_ding_event_list_image']['display']['search_result']['settings']['styles']['fallback_style'] = 'ding_list_large'; /* WAS: '' */
    $data['node-ding_event-field_ding_event_list_image']['display']['search_result']['settings']['styles']['max_style'] = 'ding_list_large'; /* WAS: '' */
    $data['node-ding_event-field_ding_event_list_image']['display']['search_result']['settings']['styles']['style_1'] = 'ding_list_medium'; /* WAS: '' */
    $data['node-ding_event-field_ding_event_list_image']['display']['search_result']['settings']['styles']['style_2'] = 'ding_list_small'; /* WAS: '' */
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function bibsdb_event_strongarm_alter(&$data) {
  if (isset($data['node_options_ding_event'])) {
    $data['node_options_ding_event']->value[0] = 'promote'; /* WAS: 'status' */
  }
}
