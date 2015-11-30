<?php
/**
 * @file
 * tipo_de_producto.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function tipo_de_producto_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'productos_relacionados_taxonomia';
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
    'node_taxonomy' => array(
      'values' => array(
        39 => 39,
        40 => 40,
        41 => 41,
        42 => 42,
        43 => 43,
        44 => 44,
        45 => 45,
        46 => 46,
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-dfec8c15c87925e2a4be6a68e0181693' => array(
          'module' => 'views',
          'delta' => 'dfec8c15c87925e2a4be6a68e0181693',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Muestra el bloque de productos relacionados cuando se está viendo un producto.');
  $export['productos_relacionados_taxonomia'] = $context;

  return $export;
}
