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
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'producto' => 'producto',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-12bfab818481b634db145907c8e6ff1b' => array(
          'module' => 'views',
          'delta' => '12bfab818481b634db145907c8e6ff1b',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-dfec8c15c87925e2a4be6a68e0181693' => array(
          'module' => 'views',
          'delta' => 'dfec8c15c87925e2a4be6a68e0181693',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Muestra el bloque de productos relacionados cuando se está viendo un producto.');
  $export['prendas_relacionadas'] = $context;

  return $export;
}
