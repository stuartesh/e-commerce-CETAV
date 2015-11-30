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
  $ds_fieldsetting->id = 'node|producto|jquery_ajax_load';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'producto';
  $ds_fieldsetting->view_mode = 'jquery_ajax_load';
  $ds_fieldsetting->settings = array(
    'ultimo_comentario' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|producto|jquery_ajax_load'] = $ds_fieldsetting;

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

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'taxonomy_term|categorias|categorias';
  $ds_fieldsetting->entity_type = 'taxonomy_term';
  $ds_fieldsetting->bundle = 'categorias';
  $ds_fieldsetting->view_mode = 'categorias';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'inline',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'p',
        'class' => '',
      ),
    ),
  );
  $export['taxonomy_term|categorias|categorias'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function tipo_de_producto_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'ultimo_comentario';
  $ds_field->label = 'Ultimo comentario';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|review_mas_reciente-block',
    'block_render' => '1',
  );
  $export['ultimo_comentario'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function tipo_de_producto_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'comment|comment_node_producto|default';
  $ds_layout->entity_type = 'comment';
  $ds_layout->bundle = 'comment_node_producto';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'ds_user_picture',
        1 => 'author',
        2 => 'title',
        3 => 'field_rating',
        4 => 'comment_body',
      ),
    ),
    'fields' => array(
      'ds_user_picture' => 'ds_content',
      'author' => 'ds_content',
      'title' => 'ds_content',
      'field_rating' => 'ds_content',
      'comment_body' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['comment|comment_node_producto|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|producto|jquery_ajax_load';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'producto';
  $ds_layout->view_mode = 'jquery_ajax_load';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_imagen',
        1 => 'field_nombre_producto',
        2 => 'field_fabricante',
        3 => 'field_rating',
        4 => 'field_precio',
        5 => 'ultimo_comentario',
        6 => 'field_descripcion',
      ),
    ),
    'fields' => array(
      'field_imagen' => 'ds_content',
      'field_nombre_producto' => 'ds_content',
      'field_fabricante' => 'ds_content',
      'field_rating' => 'ds_content',
      'field_precio' => 'ds_content',
      'ultimo_comentario' => 'ds_content',
      'field_descripcion' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'section',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|producto|jquery_ajax_load'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|categorias|categorias';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'categorias';
  $ds_layout->view_mode = 'categorias';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['taxonomy_term|categorias|categorias'] = $ds_layout;

  return $export;
}
