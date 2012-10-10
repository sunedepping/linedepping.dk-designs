<?php
/**
 * @file
 * depping_design.features.inc
 */

/**
 * Implements hook_node_info().
 */
function depping_design_node_info() {
  $items = array(
    'depping_design' => array(
      'name' => t('Design'),
      'base' => 'node_content',
      'description' => t('Used <em>Design</em> for the design elements.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
