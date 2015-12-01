<?php
/**
 * @file
 * sliders.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function sliders_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flexslider_version';
  $strongarm->value = '2.2';
  $export['flexslider_version'] = $strongarm;

  return $export;
}
