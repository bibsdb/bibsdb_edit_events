(function($) {
  'use strict';

 /**
  * Add JS to display char count on edit form.
  */
  function bibsdb_char_count($textarea) {
    var max = 255;
    var len = $textarea.val().length;
    var message = len + " af " + max + " tegn. Opdatering hos Place2book fejler ved mere end " + max + " tegn.";
    $("#ding-event-node-form #edit-field-ding-event-lead .description").text(message);
  }

  // When ready start the magic.
  $(document).ready(function () {

    bibsdb_char_count($("#ding-event-node-form #edit-field-ding-event-lead textarea"));

    $("#ding-event-node-form #edit-field-ding-event-lead textarea").keyup(function() {
      bibsdb_char_count($(this));
    });

  });



})(jQuery);