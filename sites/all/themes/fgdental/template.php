<?php
/**
 * @file
 * The primary PHP file for this theme.
 */

/* changes read more text by content type */
function fgdental_preprocess_node(&$variables) {

  if (isset($variables['content']['links']['node']['#links']['node-readmore']) && ($variables['type'] == 'produto')){
  $variables['content']['links']['node']['#links']['node-readmore']['title'] = "Detalhes";
  }
  if (isset($variables['content']['links']['node']['#links']['node-readmore']) && ($variables['type'] == 'novidades')){
  $variables['content']['links']['node']['#links']['node-readmore']['title'] = "Ver mais";
  }
}
