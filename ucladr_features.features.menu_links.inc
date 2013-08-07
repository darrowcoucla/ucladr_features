<?php
/**
 * @file
 * ucladr_features.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ucladr_features_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:search
  $menu_links['main-menu:search'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'search',
    'router_path' => 'search',
    'link_title' => 'Look Up Data',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '10',
    'parent_path' => 'node/108',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Look Up Data');


  return $menu_links;
}
