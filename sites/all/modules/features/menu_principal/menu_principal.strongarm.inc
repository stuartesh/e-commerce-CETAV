<?php
/**
 * @file
 * menu_principal.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function menu_principal_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_hide_empty_terms_categorias';
  $strongarm->value = 0;
  $export['taxonomy_menu_hide_empty_terms_categorias'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_term_item_description_categorias';
  $strongarm->value = 0;
  $export['taxonomy_menu_term_item_description_categorias'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_voc_item_categorias';
  $strongarm->value = FALSE;
  $export['taxonomy_menu_voc_item_categorias'] = $strongarm;

  return $export;
}
