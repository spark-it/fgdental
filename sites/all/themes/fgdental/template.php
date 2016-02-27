<?php
/**
 * @file
 * The primary PHP file for this theme.
 */
function fgdental_preprocess_node(&$variables) {

  if (isset($variables['content']['links']['node']['#links']['node-readmore'])){
  $variables['content']['links']['node']['#links']['node-readmore']['title'] = "Detalhes";
  }
}
