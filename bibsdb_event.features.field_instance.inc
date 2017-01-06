<?php
/**
 * @file
 * bibsdb_event.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function bibsdb_event_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'taxonomy_term-event_category-field_bibsdb_event_cat_bottom'
  $field_instances['taxonomy_term-event_category-field_bibsdb_event_cat_bottom'] = array(
    'bundle' => 'event_category',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_bibsdb_event_cat_bottom',
    'label' => 'SEO tekst vist nederst på siden',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 15,
      ),
      'type' => 'text_textarea',
      'weight' => 42,
    ),
  );

  // Exported field_instance: 'taxonomy_term-event_category-field_bibsdb_event_cat_top'
  $field_instances['taxonomy_term-event_category-field_bibsdb_event_cat_top'] = array(
    'bundle' => 'event_category',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_bibsdb_event_cat_top',
    'label' => 'bibsdb_event_cat_top',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 43,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('SEO tekst vist nederst på siden');
  t('bibsdb_event_cat_top');

  return $field_instances;
}
