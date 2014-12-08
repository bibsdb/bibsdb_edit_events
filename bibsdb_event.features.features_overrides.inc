<?php
/**
 * @file
 * bibsdb_event.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function bibsdb_event_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: variable
  $overrides["variable.node_options_ding_event.value|0"]["DELETED"] = TRUE;

 return $overrides;
}
