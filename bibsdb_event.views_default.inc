<?php
/**
 * @file
 * bibsdb_event.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function bibsdb_event_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'bibsdb_event_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Bibsdb Event';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Arrangementer';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_ding_event_category' => 'field_ding_event_category',
    'field_ding_event_date' => 'field_ding_event_date',
    'status' => 'status',
  );
  $handler->display->display_options['style_options']['default'] = 'field_ding_event_date';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ding_event_category' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ding_event_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Overskrift: Global: Tekstområde */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Create event';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<ul class="action-links">
<li>
<a href="/node/add/ding-event">Opret arrangement</a>
</li>
</ul>';
  $handler->display->display_options['header']['area']['format'] = 'html';
  /* Felt: Indhold: Date */
  $handler->display->display_options['fields']['field_ding_event_date']['id'] = 'field_ding_event_date';
  $handler->display->display_options['fields']['field_ding_event_date']['table'] = 'field_data_field_ding_event_date';
  $handler->display->display_options['fields']['field_ding_event_date']['field'] = 'field_ding_event_date';
  $handler->display->display_options['fields']['field_ding_event_date']['label'] = 'Dato';
  $handler->display->display_options['fields']['field_ding_event_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Felt: Felt: Library */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['label'] = 'Bibliotek';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['og_group_ref']['delta_offset'] = '0';
  /* Felt: Indhold: Category */
  $handler->display->display_options['fields']['field_ding_event_category']['id'] = 'field_ding_event_category';
  $handler->display->display_options['fields']['field_ding_event_category']['table'] = 'field_data_field_ding_event_category';
  $handler->display->display_options['fields']['field_ding_event_category']['field'] = 'field_ding_event_category';
  $handler->display->display_options['fields']['field_ding_event_category']['label'] = 'Kategori';
  /* Felt: Indhold: Udgivet */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Felt: Indhold: Redigér-link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Kopiér link */
  $handler->display->display_options['fields']['clone_node']['id'] = 'clone_node';
  $handler->display->display_options['fields']['clone_node']['table'] = 'node';
  $handler->display->display_options['fields']['clone_node']['field'] = 'clone_node';
  $handler->display->display_options['fields']['clone_node']['label'] = '';
  $handler->display->display_options['fields']['clone_node']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Slet-link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ding_event' => 'ding_event',
  );
  /* Filterkriterie: Indhold: Date - slutdato (field_ding_event_date:value2) */
  $handler->display->display_options['filters']['field_ding_event_date_value2']['id'] = 'field_ding_event_date_value2';
  $handler->display->display_options['filters']['field_ding_event_date_value2']['table'] = 'field_data_field_ding_event_date';
  $handler->display->display_options['filters']['field_ding_event_date_value2']['field'] = 'field_ding_event_date_value2';
  $handler->display->display_options['filters']['field_ding_event_date_value2']['operator'] = '>';
  $handler->display->display_options['filters']['field_ding_event_date_value2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ding_event_date_value2']['expose']['operator_id'] = 'field_ding_event_date_value2_op';
  $handler->display->display_options['filters']['field_ding_event_date_value2']['expose']['label'] = 'Vis kun arrangementer efter';
  $handler->display->display_options['filters']['field_ding_event_date_value2']['expose']['operator'] = 'field_ding_event_date_value2_op';
  $handler->display->display_options['filters']['field_ding_event_date_value2']['expose']['identifier'] = 'field_ding_event_date_value2';
  $handler->display->display_options['filters']['field_ding_event_date_value2']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_ding_event_date_value2']['default_date'] = 'now - 1 day';
  /* Filterkriterie: Indhold: Category (field_ding_event_category) */
  $handler->display->display_options['filters']['field_ding_event_category_tid']['id'] = 'field_ding_event_category_tid';
  $handler->display->display_options['filters']['field_ding_event_category_tid']['table'] = 'field_data_field_ding_event_category';
  $handler->display->display_options['filters']['field_ding_event_category_tid']['field'] = 'field_ding_event_category_tid';
  $handler->display->display_options['filters']['field_ding_event_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ding_event_category_tid']['expose']['operator_id'] = 'field_ding_event_category_tid_op';
  $handler->display->display_options['filters']['field_ding_event_category_tid']['expose']['label'] = 'Vælg kategori';
  $handler->display->display_options['filters']['field_ding_event_category_tid']['expose']['operator'] = 'field_ding_event_category_tid_op';
  $handler->display->display_options['filters']['field_ding_event_category_tid']['expose']['identifier'] = 'field_ding_event_category_tid';
  $handler->display->display_options['filters']['field_ding_event_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_ding_event_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_ding_event_category_tid']['vocabulary'] = 'event_category';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/bibsdb-edit-events';
  $handler->display->display_options['menu']['title'] = 'Arrangementer';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['bibsdb_event_view'] = array(
    t('Master'),
    t('Arrangementer'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('Create event'),
    t('<ul class="action-links">
<li>
<a href="/node/add/ding-event">Opret arrangement</a>
</li>
</ul>'),
    t('Dato'),
    t('Titel'),
    t('Bibliotek'),
    t('Kategori'),
    t('Udgivet'),
    t('Vis kun arrangementer efter'),
    t('Vælg kategori'),
    t('Page'),
  );
  $export['bibsdb_event_view'] = $view;

  return $export;
}
