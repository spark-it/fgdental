<?php
/**
 * @file
 * content.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function content_node_info() {
  $items = array(
    'pagina_basica' => array(
      'name' => t('Página Básica'),
      'base' => 'node_content',
      'description' => t('Página de conteúdo geral.'),
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
