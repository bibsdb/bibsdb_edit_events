<?php
/**
 * @file
 * bibsdb_event.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function bibsdb_event_default_rules_configuration() {
  $items = array();
  $items['rules_redirect_unpublished_events'] = entity_import('rules_config', '{ "rules_redirect_unpublished_events" : {
      "LABEL" : "Redirect unpublished events",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_view--ding_event" : { "bundle" : "ding_event" } },
      "IF" : [ { "NOT node_is_published" : { "node" : [ "node" ] } } ],
      "DO" : [ { "redirect" : { "url" : "arrangementer" } } ]
    }
  }');
  return $items;
}
