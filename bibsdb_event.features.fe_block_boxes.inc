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
  $fe_block_boxes->body = '<h2>Hvad sker der i Sønderborg?</h2><p>Der sker rigtig meget forskelligt, hvis du studerer vores arrangementskalender for 2017. Programmet er fyldt med oplevelser og aktiviteter i Sønderborg, Nordborg, Gråsten, Hørup, Augustenborg, Broager, Ulkebøl, Dybbøl og Vester Sottrup.</p><p>Hver sæson byder på foredrag, musik og koncerter. Forfatterforedrag med kendte eller debuterende forfattere er tilbagevendende arrangementer. Bogcafé med boganbefalinger og litterære trends er også tilbagevendende oplevelser, som du genfinder i dette års program. &nbsp;Hertil kommer en lang række foredrag der gør dig klogere på alverdens ting. Vi gør os umage for at have et alsidigt program med kulturoplevelser for enhver smag.</p><h2>Foredrag i og udenfor Sønderborg by</h2><p>Foråret 2017 er ingen undtagelse. Som altid er paletten bred, når det drejer sig om emner og foredragsholdere:&nbsp;Naturen får plads, det gør litteraturen også, hvor vi bevæger os ud i så forskellige emner som gyserlitteratur og arabisk litteratur. Vi får besøg af kendte forfattere som Tom Buk-Swienty og Merete Pryds Helle, og kender man ikke den kirgisiske forfatter Djingiz Ajtmatov i forvejen, er der mulighed for at høre om ham.</p><h2>Musik og sang</h2><p>Musik vil der også være masser af, bl.a. under det velkendte koncept: &rdquo;Musik i Gårdhaven&rdquo;, der &ndash; traditionen tro &ndash; afslutter sæsonen. Ensemblet &rdquo;Tordenskjolds Soldater&rdquo; kommer således til at være med til at sige farvel til de velkendte koncepter på hovedbiblioteket på Kongevej. Men det betyder ingenlunde nedlukning af denne del af tilbuddene, tværtimod &ndash; vi er klar med nye tiltag og spændende arrangementer under nye rammer i Multikulturhuset til efteråret 2017.</p><p>Så spørger du stadig dig selv: Hvad sker der i Sønderborg i 2017? Så ligger svaret lige for. Kig i bibliotekets program og så har du svaret: <strong>Det sker i Sønderborg!</strong></p><h2><strong>Aktiviteter for børn</strong></h2><p>Biblioteket har mange sjove aktiviteter for børn i 2017. For børnene har vi aktiviteter for baby, aktiviteter for børn og aktiviteter for unge. Særlig børneteater er et trækplaster hvor alle billetter tit bliver hurtigt udsolgt. Læseklubben The, boller og bøger er en af vores aktiviteter i Sønderborg, mens babyrytmik er et tilbud på alle kommunens biblioteker. Hvis du leder efter aktiviteter i Nordborg eller aktiviteter i Gråsten for dig og din baby, har vi et godt tilbud til dig.</p><h2><strong>Det sker uden for Sønderborg by</strong></h2><p>Vores arrangementer foregår ikke kun på biblioteket i Sønderborg by og men også på bibliotekerne i Nordborg, Gråsten, Broager, Dybbøl, Hørup, Vester Sottrup, Augustenborg og Ulkebøl. Vi Så søger du oplevelser i Sønderjylland og er på de kanter er det værd at tjekke vores aktivitetskalender.</p>';

  $export['bibsdb_all_events_text'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'H1 title for /arrangementer';
  $fe_block_boxes->format = 'html';
  $fe_block_boxes->machine_name = 'bibsdb_all_events_title';
  $fe_block_boxes->body = '<h1>Det sker - arrangementer og aktiviteter</h1>';

  $export['bibsdb_all_events_title'] = $fe_block_boxes;

  return $export;
}
