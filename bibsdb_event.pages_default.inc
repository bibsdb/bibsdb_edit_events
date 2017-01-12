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
  $handler->name = 'page_ding_events__bibsdb-ding-events';
  $handler->task = 'page';
  $handler->subtask = 'ding_events';
  $handler->handler = 'panel_context';
  $handler->weight = -1;
  $handler->conf = array(
    'title' => 'Bibsdb Ding events',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Home
Events
%tid:name',
    'panels_breadcrumbs_paths' => '<front>
events
<none>',
    'name' => 'bibsdb-ding-events',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
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
  $display->uuid = 'd49a3b8f-8e68-4ec6-8382-b2d01945b356';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-48f2820d-1223-41f2-ae05-0fa1e907a1a8';
    $pane->panel = 'left_sidebar';
    $pane->type = 'taxonomy_menu';
    $pane->subtype = 'taxonomy_menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_term_1',
        1 => 'empty',
      ),
      'override_title' => 0,
      'override_title_text' => '',
      'slug' => 'arrangementer',
      'default_link' => 'All categories',
      'default_link_text' => 'All categories',
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
    $pane->uuid = '48f2820d-1223-41f2-ae05-0fa1e907a1a8';
    $display->content['new-48f2820d-1223-41f2-ae05-0fa1e907a1a8'] = $pane;
    $display->panels['left_sidebar'][0] = 'new-48f2820d-1223-41f2-ae05-0fa1e907a1a8';
    $pane = new stdClass();
    $pane->pid = 'new-6961a9f1-4b6a-4bcd-95b2-ca9e6655b1ff';
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
    $pane->locks = '';
    $pane->uuid = '6961a9f1-4b6a-4bcd-95b2-ca9e6655b1ff';
    $display->content['new-6961a9f1-4b6a-4bcd-95b2-ca9e6655b1ff'] = $pane;
    $display->panels['main_content'][0] = 'new-6961a9f1-4b6a-4bcd-95b2-ca9e6655b1ff';
    $pane = new stdClass();
    $pane->pid = 'new-d603ce6a-0b1f-4a83-81ac-a9db9c950d31';
    $pane->panel = 'main_content';
    $pane->type = 'library_list';
    $pane->subtype = 'library_list';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'library_count',
          'settings' => array(
            'count' => '1',
          ),
          'not' => TRUE,
        ),
      ),
    );
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
    $pane->locks = '';
    $pane->uuid = 'd603ce6a-0b1f-4a83-81ac-a9db9c950d31';
    $display->content['new-d603ce6a-0b1f-4a83-81ac-a9db9c950d31'] = $pane;
    $display->panels['main_content'][1] = 'new-d603ce6a-0b1f-4a83-81ac-a9db9c950d31';
    $pane = new stdClass();
    $pane->pid = 'new-5d683c57-a79e-4d16-9046-d2dc04a557d5';
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
    $pane->uuid = '5d683c57-a79e-4d16-9046-d2dc04a557d5';
    $display->content['new-5d683c57-a79e-4d16-9046-d2dc04a557d5'] = $pane;
    $display->panels['main_content'][2] = 'new-5d683c57-a79e-4d16-9046-d2dc04a557d5';
    $pane = new stdClass();
    $pane->pid = 'new-180928cf-2ad4-426b-83ac-37276a125a4e';
    $pane->panel = 'main_content';
    $pane->type = 'block';
    $pane->subtype = 'block-2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '180928cf-2ad4-426b-83ac-37276a125a4e';
    $display->content['new-180928cf-2ad4-426b-83ac-37276a125a4e'] = $pane;
    $display->panels['main_content'][3] = 'new-180928cf-2ad4-426b-83ac-37276a125a4e';
    $pane = new stdClass();
    $pane->pid = 'new-fb32e006-e3f2-4f14-a1a2-0513758f77e8';
    $pane->panel = 'right_sidebar';
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
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '600',
        'granularity' => 'none',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = 'fb32e006-e3f2-4f14-a1a2-0513758f77e8';
    $display->content['new-fb32e006-e3f2-4f14-a1a2-0513758f77e8'] = $pane;
    $display->panels['right_sidebar'][0] = 'new-fb32e006-e3f2-4f14-a1a2-0513758f77e8';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['page_ding_events__bibsdb-ding-events'] = $handler;

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
    $pane->pid = 'new-8cbde185-f5d7-4042-8dd7-bf3f7fa82bcf';
    $pane->panel = 'main_content';
    $pane->type = 'entity_field';
    $pane->subtype = 'taxonomy_term:field_bibsdb_event_cat_top';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_term_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8cbde185-f5d7-4042-8dd7-bf3f7fa82bcf';
    $display->content['new-8cbde185-f5d7-4042-8dd7-bf3f7fa82bcf'] = $pane;
    $display->panels['main_content'][1] = 'new-8cbde185-f5d7-4042-8dd7-bf3f7fa82bcf';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '182ac438-746a-48a7-b7f2-1a696f14b582';
    $display->content['new-182ac438-746a-48a7-b7f2-1a696f14b582'] = $pane;
    $display->panels['main_content'][2] = 'new-182ac438-746a-48a7-b7f2-1a696f14b582';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '3cb95651-0650-42f1-a8bd-e56688d1a4aa';
    $display->content['new-3cb95651-0650-42f1-a8bd-e56688d1a4aa'] = $pane;
    $display->panels['main_content'][3] = 'new-3cb95651-0650-42f1-a8bd-e56688d1a4aa';
    $pane = new stdClass();
    $pane->pid = 'new-740de3f1-a957-4329-a3b3-bf6d2720d890';
    $pane->panel = 'main_content';
    $pane->type = 'entity_field';
    $pane->subtype = 'taxonomy_term:field_bibsdb_event_cat_bottom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_term_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '740de3f1-a957-4329-a3b3-bf6d2720d890';
    $display->content['new-740de3f1-a957-4329-a3b3-bf6d2720d890'] = $pane;
    $display->panels['main_content'][4] = 'new-740de3f1-a957-4329-a3b3-bf6d2720d890';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view__bibsdb-ding-events'] = $handler;

  return $export;
}
