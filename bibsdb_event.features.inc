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
 * Implements hook_strongarm_alter().
 */
function bibsdb_event_strongarm_alter(&$data) {
  if (isset($data['node_options_ding_event'])) {
    unset($data['node_options_ding_event']->value[0]);
  }
}
