<?php
/**
 * @file
 * fgdental.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fgdental_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function fgdental_node_info() {
  $items = array(
    'novidades' => array(
      'name' => t('Novidades'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
    'produto' => array(
      'name' => t('Produto'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Nome'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
