<?php
/**
 * @file
 * bibsdb_event.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function bibsdb_event_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__bibsdb-ding-events';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -1;
  $handler->conf = array(
    'title' => 'Bibsdb Ding events',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        1 => array(
          'name' => 'entity_bundle:taxonomy_term',
          'settings' => array(
            'type' => array(
              'event_category' => 'event_category',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Events
%term:name',
    'panels_breadcrumbs_paths' => 'events
taxonomy/term/%term:tid',
    'panels_breadcrumbs_home' => 1,
    'name' => 'bibsdb-ding-events',
  );
  $display = new panels_display();
  $display->layout = '25_50_25';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'left_sidebar' => NULL,
      'main_content' => NULL,
      'right_sidebar' => NULL,
      'attachment_4_1' => NULL,
      'attachment_4_2' => NULL,
      'attachment_4_3' => NULL,
      'attachment_4_4' => NULL,
      'attachment_3_1' => NULL,
      'attachment_3_2' => NULL,
      'attachment_3_3' => NULL,
      'attachment_2_1' => NULL,
      'attachment_2_2' => NULL,
      'attachment_1_1' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Events';
  $display->uuid = 'e6d7ce53-caaa-4af3-8588-00d36e8d512a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-69e61890-8dde-42c3-b8e4-192813161a0c';
    $pane->panel = 'left_sidebar';
    $pane->type = 'taxonomy_menu';
    $pane->subtype = 'taxonomy_menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'slug' => 'arrangementer',
      'default_link_text' => 'All categories',
      'context' => array(
        0 => 'argument_term_1',
        1 => 'empty',
      ),
      'override_title' => 0,
      'override_title_text' => '',
      'dropdown' => 0,
      'vocabulary' => 'event_category',
      'base' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '69e61890-8dde-42c3-b8e4-192813161a0c';
    $display->content['new-69e61890-8dde-42c3-b8e4-192813161a0c'] = $pane;
    $display->panels['left_sidebar'][0] = 'new-69e61890-8dde-42c3-b8e4-192813161a0c';
    $pane = new stdClass();
    $pane->pid = 'new-e96436de-1a68-4813-91aa-63662d84d299';
    $pane->panel = 'left_sidebar';
    $pane->type = 'campaign';
    $pane->subtype = 'campaign';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'ding_campaign_count' => 3,
      'ding_campaign_offset' => 0,
      'context' => array(
        0 => 'empty',
        1 => 'empty',
        2 => 'empty',
        3 => 'empty',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e96436de-1a68-4813-91aa-63662d84d299';
    $display->content['new-e96436de-1a68-4813-91aa-63662d84d299'] = $pane;
    $display->panels['left_sidebar'][1] = 'new-e96436de-1a68-4813-91aa-63662d84d299';
    $pane = new stdClass();
    $pane->pid = 'new-ee39a7cd-921c-4424-97bf-5ab8d9033c6f';
    $pane->panel = 'main_content';
    $pane->type = 'menu_title';
    $pane->subtype = 'menu_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ee39a7cd-921c-4424-97bf-5ab8d9033c6f';
    $display->content['new-ee39a7cd-921c-4424-97bf-5ab8d9033c6f'] = $pane;
    $display->panels['main_content'][0] = 'new-ee39a7cd-921c-4424-97bf-5ab8d9033c6f';
    $pane = new stdClass();
    $pane->pid = 'new-182ac438-746a-48a7-b7f2-1a696f14b582';
    $pane->panel = 'main_content';
    $pane->type = 'library_list';
    $pane->subtype = 'library_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'ding_event',
      'context' => array(
        0 => 'argument_term_1',
        1 => 'empty',
      ),
      'override_title' => 0,
      'override_title_text' => '',
      'slug' => 'arrangementer',
      'hide_default' => 0,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '182ac438-746a-48a7-b7f2-1a696f14b582';
    $display->content['new-182ac438-746a-48a7-b7f2-1a696f14b582'] = $pane;
    $display->panels['main_content'][1] = 'new-182ac438-746a-48a7-b7f2-1a696f14b582';
    $pane = new stdClass();
    $pane->pid = 'new-3cb95651-0650-42f1-a8bd-e56688d1a4aa';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'ding_event-ding_event_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_term_1',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '3cb95651-0650-42f1-a8bd-e56688d1a4aa';
    $display->content['new-3cb95651-0650-42f1-a8bd-e56688d1a4aa'] = $pane;
    $display->panels['main_content'][2] = 'new-3cb95651-0650-42f1-a8bd-e56688d1a4aa';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view__bibsdb-ding-events'] = $handler;

  return $export;
}