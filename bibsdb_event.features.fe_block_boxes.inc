<?php
/**
 * @file
 * bibsdb_event.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function bibsdb_event_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'SEO text for /arrangementer';
  $fe_block_boxes->format = 'html';
  $fe_block_boxes->machine_name = 'bibsdb_all_events_text';
  $fe_block_boxes->body = '<p><strong>Hvad sker der i Sønderborg?</strong><br>Bibliotekets program er fyldt med oplevelser og aktiviteter. For de voksne er der musik og foredrag. Ofte med anbefalinger af gode bøger og mulighed for at møde forfatteren selv. Har du selv en forfatterspire i maven kan du finde støtte i forfatter-netværket, der bakkes op af arrangementer i 2016 og 2017. Vi gør os umage for at have et alsidigt program med kulturoplevelser for enhver smag.</p><p><strong>Aktiviteter for børn</strong><br>For børnene har vi aktiviteter for baby, aktiviteter for børn og aktiviteter for unge. Særlig teater for børn er et trækplaster hvor alle billetter tit bliver udsolgt. Vores 3 års-træf er en tilbagevendende aktivitet for børn på 3 år. Vi inviterer alle treårige til et eksklusivt event med højtlæsning eller babyrytmik hvor de får en boggave. Der er afholdes 3-årstræf i Sønderborg, Gråsten, Broager, Nordborg, Ulkebøl, V. Sottrup, Ulkebøl og Augustenborg. Alt det sker i Sønderborg og rundt omkring på bibliotekerne i Sønderborg Kommune.</p><p><strong>Arrangementer uden for Sønderborg by</strong><br>Vores arrangementer foregår ikke kun på biblioteket i Sønderborg by og men også på bibliotekerne i Nordborg, Gråsten, Broager, Dybbøl, Hørup, Vester Sottrup, Augustenborg og Ulkebøl. Vi Så søger du oplevelser i Sønderjylland og er på de kanter er det værd at tjekke vores aktivitetskalender.</p>';

  $export['bibsdb_all_events_text'] = $fe_block_boxes;

  return $export;
}
