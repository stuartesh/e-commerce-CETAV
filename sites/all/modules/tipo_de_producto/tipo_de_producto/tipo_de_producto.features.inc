<?php
/**
 * @file
 * tipo_de_producto.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tipo_de_producto_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function tipo_de_producto_node_info() {
  $items = array(
    'producto' => array(
      'name' => t('Producto'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
