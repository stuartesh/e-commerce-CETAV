<?php
/**
 * @file
 * display.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function display_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'prendas_relacionadas';
  $context->description = 'Muestra el bloque de productos relacionados cuando se está viendo un producto.';
  $context->tag = '';
  $context->conditions = array();
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Muestra el bloque de productos relacionados cuando se está viendo un producto.');
  $export['prendas_relacionadas'] = $context;

  return $export;
}
