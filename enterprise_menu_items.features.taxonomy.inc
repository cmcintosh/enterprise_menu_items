<?php
/**
 * @file
 * enterprise_menu_items.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function enterprise_menu_items_taxonomy_default_vocabularies() {
  return array(
    'menu_category' => array(
      'name' => 'Menu Category',
      'machine_name' => 'menu_category',
      'description' => 'Categorize menu items',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
