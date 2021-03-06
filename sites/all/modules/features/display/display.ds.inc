<?php
/**
 * @file
 * display.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function display_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'comment|comment_node_producto|comentario_mas_reciente';
  $ds_fieldsetting->entity_type = 'comment';
  $ds_fieldsetting->bundle = 'comment_node_producto';
  $ds_fieldsetting->view_mode = 'comentario_mas_reciente';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'ds_user_picture' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'ds_picture_thumbnail',
    ),
  );
  $export['comment|comment_node_producto|comentario_mas_reciente'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|producto|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'producto';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'productos_relacionados' => array(
      'weight' => '8',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'ultimo_comentario' => array(
      'weight' => '6',
      'label' => 'above',
      'format' => 'default',
    ),
    'comments' => array(
      'weight' => '9',
      'label' => 'above',
      'format' => 'default',
    ),
  );
  $export['node|producto|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|producto|relacionado';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'producto';
  $ds_fieldsetting->view_mode = 'relacionado';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => '',
      ),
    ),
  );
  $export['node|producto|relacionado'] = $ds_fieldsetting;

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
function display_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'productos_relacionados';
  $ds_field->label = 'Productos Relacionados';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|732a6c19209d9b8d4c3df6b05da0820d',
    'block_render' => '2',
  );
  $export['productos_relacionados'] = $ds_field;

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
    'block' => 'views|12bfab818481b634db145907c8e6ff1b',
    'block_render' => '1',
  );
  $export['ultimo_comentario'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function display_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|producto|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'producto';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'field_imagen',
      ),
      'left' => array(
        1 => 'field_categoria',
        2 => 'field_fabricante',
        3 => 'field_rating',
        4 => 'field_precio',
        5 => 'ultimo_comentario',
        6 => 'field_descripcion',
      ),
      'footer' => array(
        7 => 'field_video_producto',
        8 => 'productos_relacionados',
        9 => 'comments',
      ),
    ),
    'fields' => array(
      'field_imagen' => 'header',
      'field_categoria' => 'left',
      'field_fabricante' => 'left',
      'field_rating' => 'left',
      'field_precio' => 'left',
      'ultimo_comentario' => 'left',
      'field_descripcion' => 'left',
      'field_video_producto' => 'footer',
      'productos_relacionados' => 'footer',
      'comments' => 'footer',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|producto|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|producto|relacionado';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'producto';
  $ds_layout->view_mode = 'relacionado';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_imagen',
        1 => 'title',
      ),
    ),
    'fields' => array(
      'field_imagen' => 'ds_content',
      'title' => 'ds_content',
    ),
    'limit' => array(
      'field_imagen' => '1',
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
  $export['node|producto|relacionado'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function display_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'categorias';
  $ds_view_mode->label = 'Categorias';
  $ds_view_mode->entities = array(
    'taxonomy_term' => 'taxonomy_term',
  );
  $export['categorias'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'destacados';
  $ds_view_mode->label = 'Destacados';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['destacados'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'relacionado';
  $ds_view_mode->label = 'Relacionados';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['relacionado'] = $ds_view_mode;

  return $export;
}
