<?php
/**
 * @file
 * fgdental.features.contact_categories.inc
 */

/**
 * Implements hook_contact_categories_defaults().
 */
function fgdental_contact_categories_defaults() {
  return array(
    'Website feedback' => array(
      'category' => 'Website feedback',
      'recipients' => 'rudamaia@gmail.com',
      'reply' => '',
      'weight' => 0,
      'selected' => 1,
    ),
  );
}
