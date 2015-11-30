(function ($) {
  Drupal.behaviors.filtros_categoria = {
    attach: function (context, settings) {

      jQuery("#ajax-target").bind('click', function(e) {
        $(this).load("/node/get/ajax/"+settings.filtros_categoria.nid);
      });
    }
  };
}(jQuery));