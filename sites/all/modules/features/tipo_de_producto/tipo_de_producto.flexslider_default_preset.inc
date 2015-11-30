<?php
/**
 * @file
 * tipo_de_producto.flexslider_default_preset.inc
 */

/**
 * Implements hook_flexslider_default_presets().
 */
function tipo_de_producto_flexslider_default_presets() {
  $export = array();

  $preset = new stdClass();
  $preset->disabled = FALSE; /* Edit this to true to make a default preset disabled initially */
  $preset->api_version = 1;
  $preset->name = 'ofertas';
  $preset->title = 'Ofertas';
  $preset->theme = 'classic';
  $preset->options = array(
    'namespace' => 'flex-',
    'selector' => '.slides > li',
    'easing' => 'swing',
    'direction' => 'horizontal',
    'reverse' => 0,
    'smoothHeight' => 0,
    'startAt' => '0',
    'animationSpeed' => '600',
    'initDelay' => '0',
    'useCSS' => 1,
    'touch' => 1,
    'video' => 0,
    'keyboard' => 0,
    'multipleKeyboard' => 0,
    'mousewheel' => 0,
    'controlsContainer' => '.flex-control-nav-container',
    'sync' => '',
    'asNavFor' => '',
    'itemWidth' => '0',
    'itemMargin' => '0',
    'minItems' => '1',
    'maxItems' => '3',
    'move' => '0',
    'animation' => 'fade',
    'slideshow' => 1,
    'slideshowSpeed' => '7000',
    'directionNav' => 1,
    'controlNav' => '1',
    'prevText' => 'Previous',
    'nextText' => 'Next',
    'pausePlay' => 0,
    'pauseText' => 'Pause',
    'playText' => 'Play',
    'randomize' => 0,
    'thumbCaptions' => 0,
    'thumbCaptionsBoth' => 0,
    'animationLoop' => 1,
    'pauseOnAction' => 0,
    'pauseOnHover' => 1,
    'manualControls' => '',
  );
  $export['ofertas'] = $preset;

  $preset = new stdClass();
  $preset->disabled = FALSE; /* Edit this to true to make a default preset disabled initially */
  $preset->api_version = 1;
  $preset->name = 'prendas_destacadas';
  $preset->title = 'Prendas Destacadas';
  $preset->theme = 'classic';
  $preset->options = array(
    'namespace' => 'flex-',
    'selector' => '.slides > li',
    'easing' => 'swing',
    'direction' => 'horizontal',
    'reverse' => 0,
    'smoothHeight' => 0,
    'startAt' => '0',
    'animationSpeed' => '600',
    'initDelay' => '0',
    'useCSS' => 0,
    'touch' => 0,
    'video' => 0,
    'keyboard' => 0,
    'multipleKeyboard' => 0,
    'mousewheel' => 0,
    'controlsContainer' => '',
    'sync' => '',
    'asNavFor' => '',
    'itemWidth' => '0',
    'itemMargin' => '0',
    'minItems' => '2',
    'maxItems' => '2',
    'move' => '0',
    'animation' => 'fade',
    'slideshow' => 0,
    'slideshowSpeed' => '7000',
    'directionNav' => 0,
    'controlNav' => '1',
    'prevText' => '',
    'nextText' => '',
    'pausePlay' => 0,
    'pauseText' => '',
    'playText' => '',
    'randomize' => 0,
    'thumbCaptions' => 0,
    'thumbCaptionsBoth' => 0,
    'animationLoop' => 0,
    'pauseOnAction' => 0,
    'pauseOnHover' => 0,
    'manualControls' => '',
  );
  $export['prendas_destacadas'] = $preset;

  return $export;
}
