<?php
/**
 * @file
 * The primary PHP file for this theme.
 */

/* changes read more text by content type */
function fgdental_preprocess_node(&$variables) {

  if (isset($variables['content']['links']['node']['#links']['node-readmore']) && ($variables['type'] == 'produto')){
  $variables['content']['links']['node']['#links']['node-readmore']['title'] = "Ver Detalhes";
  $variables['content']['links']['node']['#links']['node-readmore']['attributes']['class'][] = "btn btn-block";
  }
  if (isset($variables['content']['links']['node']['#links']['node-readmore']) && ($variables['type'] == 'novidades')){
  $variables['content']['links']['node']['#links']['node-readmore']['title'] = "Ver mais";
  }
}
function fgdental_menu_link(array $variables) {
  //add class for a
  if ($variables['element']['#original_link']['menu_name'] == 'main-menu') {
   $variables['element']['#localized_options']['attributes']['class'][] = "btn btn-warning";
 }
//dvm($variables['element']);
  return theme_menu_link($variables);
}
function fgdental_form_alter(&$form, $form_state, $form_id) {
	$form['#action'] = url('https://formspree.io/rudamaia@gmail.com');
	
}