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
  $fe_block_boxes->body = '<h4><strong>Hvad sker der i Sønderborg?</strong></h4><p>Der sker rigtig meget forskelligt, hvis du studerer vores arrangementskalender for 2017. Programmet er fyldt med oplevelser og aktiviteter i Sønderborg, Nordborg, Gråsten, Hørup, Augustenborg, Broager, Ulkebøl, Dybbøl og Vester Sottrup.</p><h4>Oplevelser for det voksne publikum</h4><p>Hver sæson byder på foredrag, musik og koncerter. Forfatterforedrag med kendte eller debuterende forfattere er tilbagevendende arrangementer. Bogcafé med boganbefalinger og litterære trends er også tilbagevendende oplevelser, som du genfinder i dette års program. &nbsp;Hertil kommer en lang række foredrag der gør dig klogere på alverdens ting. Vi gør os umage for at have et alsidigt program med kulturoplevelser for enhver smag.</p><p>Så spørger du stadig dig selv: Hvad sker der i Sønderborg i 2017? Så ligger svaret lige for. Kig i bibliotekets program og så har du svaret: <strong>Det sker i Sønderborg!</strong></p><h4><strong>Aktiviteter for børn</strong></h4><p>Biblioteket har mange sjove aktiviteter for børn i 2017. For børnene har vi aktiviteter for baby, aktiviteter for børn og aktiviteter for unge. Særlig børneteater er et trækplaster hvor alle billetter tit bliver hurtigt udsolgt. Læseklubben The, boller og bøger er en af vores aktiviteter i Sønderborg, mens babyrytmik er et tilbud på alle kommunens biblioteker. Hvis du leder efter aktiviteter i Nordborg eller aktiviteter i Gråsten for dig og din baby, har vi et godt tilbud til dig.</p><h4><strong>Arrangementer uden for Sønderborg by</strong></h4><p>Vores arrangementer foregår ikke kun på biblioteket i Sønderborg by og men også på bibliotekerne i Nordborg, Gråsten, Broager, Dybbøl, Hørup, Vester Sottrup, Augustenborg og Ulkebøl. Vi Så søger du oplevelser i Sønderjylland og er på de kanter er det værd at tjekke vores aktivitetskalender.</p>';

  $export['bibsdb_all_events_text'] = $fe_block_boxes;

  return $export;
}
