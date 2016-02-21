<?php
/**
 * @file
 * content.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function content_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_pagina_basica';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_pagina_basica'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_pagina_basica';
  $strongarm->value = '0';
  $export['node_preview_pagina_basica'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_pagina_basica';
  $strongarm->value = 0;
  $export['node_submitted_pagina_basica'] = $strongarm;

  return $export;
}
