<?php
/**
 * @file
 * menu_principal.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function menu_principal_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
