<?php
/**
 * @file
 * tipo_de_producto.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function tipo_de_producto_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|producto|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'producto';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'ultimo_comentario' => array(
      'weight' => '5',
      'label' => 'above',
      'format' => 'default',
    ),
  );
  $export['node|producto|teaser'] = $ds_fieldsetting;

  return $export;
}
