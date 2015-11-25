<?php
/**
 * @file
 * producto_config.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function producto_config_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation_producto:node/add/producto.
  $menu_links['navigation_producto:node/add/producto'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/producto',
    'router_path' => 'node/add/producto',
    'link_title' => 'Producto',
    'options' => array(
      'identifier' => 'navigation_producto:node/add/producto',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Producto');

  return $menu_links;
}
