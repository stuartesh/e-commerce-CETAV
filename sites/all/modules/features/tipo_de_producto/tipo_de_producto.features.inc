<?php
/**
 * @file
 * tipo_de_producto.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tipo_de_producto_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function tipo_de_producto_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
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
      'title_label' => t('Nombre del producto'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
