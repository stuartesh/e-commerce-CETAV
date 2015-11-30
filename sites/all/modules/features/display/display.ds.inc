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
  $ds_fieldsetting->id = 'comment|comment_node_article|default';
  $ds_fieldsetting->entity_type = 'comment';
  $ds_fieldsetting->bundle = 'comment_node_article';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'post_date' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'ds_post_date_long',
    ),
    'submitted' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'author' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'ds_user_picture' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'ds_picture_medium',
    ),
  );
  $export['comment|comment_node_article|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'comment|comment_node_producto|comentario_mas_reciente';
  $ds_fieldsetting->entity_type = 'comment';
  $ds_fieldsetting->bundle = 'comment_node_producto';
  $ds_fieldsetting->view_mode = 'comentario_mas_reciente';
  $ds_fieldsetting->settings = array(
    'post_date' => array(
      'weight' => '6',
      'label' => 'inline',
      'format' => 'ds_post_date_long',
    ),
    'title' => array(
      'weight' => '2',
      'label' => 'inline',
      'format' => 'default',
    ),
    'author' => array(
      'weight' => '1',
      'label' => 'inline',
      'format' => 'default',
    ),
    'ds_user_picture' => array(
      'weight' => '0',
      'label' => 'inline',
      'format' => 'ds_picture_thumbnail',
    ),
  );
  $export['comment|comment_node_producto|comentario_mas_reciente'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'comment|comment_node_producto|default';
  $ds_fieldsetting->entity_type = 'comment';
  $ds_fieldsetting->bundle = 'comment_node_producto';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'author' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'ds_user_picture' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'ds_picture_flexslider_full',
    ),
  );
  $export['comment|comment_node_producto|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|producto|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'producto';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'ultimo_comentario' => array(
      'weight' => '6',
      'label' => 'inline',
      'format' => 'default',
    ),
    'comments' => array(
      'weight' => '10',
      'label' => 'inline',
      'format' => 'default',
    ),
  );
  $export['node|producto|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'taxonomy_term|categorias|default';
  $ds_fieldsetting->entity_type = 'taxonomy_term';
  $ds_fieldsetting->bundle = 'categorias';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'p',
        'class' => '',
      ),
    ),
  );
  $export['taxonomy_term|categorias|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function display_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'comment|comment_node_producto|comentario_mas_reciente';
  $ds_layout->entity_type = 'comment';
  $ds_layout->bundle = 'comment_node_producto';
  $ds_layout->view_mode = 'comentario_mas_reciente';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'ds_user_picture',
        1 => 'author',
        2 => 'title',
        3 => 'field_rating',
        4 => 'comment_body',
        5 => 'post_date',
      ),
    ),
    'fields' => array(
      'ds_user_picture' => 'ds_content',
      'author' => 'ds_content',
      'title' => 'ds_content',
      'field_rating' => 'ds_content',
      'comment_body' => 'ds_content',
      'post_date' => 'ds_content',
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
  $export['comment|comment_node_producto|comentario_mas_reciente'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|producto|categorizado';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'producto';
  $ds_layout->view_mode = 'categorizado';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_imagen',
        1 => 'field_nombre_producto',
        2 => 'field_precio',
        3 => 'field_categoria',
      ),
    ),
    'fields' => array(
      'field_imagen' => 'ds_content',
      'field_nombre_producto' => 'ds_content',
      'field_precio' => 'ds_content',
      'field_categoria' => 'ds_content',
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
  $export['node|producto|categorizado'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|producto|destacados';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'producto';
  $ds_layout->view_mode = 'destacados';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_imagen',
        1 => 'field_nombre_producto',
        2 => 'field_precio',
      ),
    ),
    'fields' => array(
      'field_imagen' => 'ds_content',
      'field_nombre_producto' => 'ds_content',
      'field_precio' => 'ds_content',
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
  $export['node|producto|destacados'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|producto|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'producto';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_imagen',
        1 => 'field_nombre_producto',
        2 => 'field_categoria',
        3 => 'field_fabricante',
        4 => 'field_rating',
        5 => 'field_precio',
        6 => 'ultimo_comentario',
        7 => 'field_descripcion',
        8 => 'field_video_producto',
        9 => 'comments',
      ),
    ),
    'fields' => array(
      'field_imagen' => 'ds_content',
      'field_nombre_producto' => 'ds_content',
      'field_categoria' => 'ds_content',
      'field_fabricante' => 'ds_content',
      'field_rating' => 'ds_content',
      'field_precio' => 'ds_content',
      'ultimo_comentario' => 'ds_content',
      'field_descripcion' => 'ds_content',
      'field_video_producto' => 'ds_content',
      'comments' => 'ds_content',
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
        1 => 'field_nombre_producto',
        2 => 'field_categoria',
      ),
    ),
    'fields' => array(
      'field_imagen' => 'ds_content',
      'field_nombre_producto' => 'ds_content',
      'field_categoria' => 'ds_content',
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

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|producto|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'producto';
  $ds_layout->view_mode = 'teaser';
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
  $export['node|producto|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|categorias|default';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'categorias';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_reset';
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
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['taxonomy_term|categorias|default'] = $ds_layout;

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
  $ds_view_mode->view_mode = 'categorizado';
  $ds_view_mode->label = 'Categorizado';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['categorizado'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'comentario_mas_reciente';
  $ds_view_mode->label = 'Review más reciente';
  $ds_view_mode->entities = array(
    'comment' => 'comment',
  );
  $export['comentario_mas_reciente'] = $ds_view_mode;

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
