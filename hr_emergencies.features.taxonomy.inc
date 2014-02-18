<?php
/**
 * @file
 * hr_emergencies.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function hr_emergencies_taxonomy_default_vocabularies() {
  return array(
    'hr_glide_type' => array(
      'name' => 'GLIDE Type',
      'machine_name' => 'hr_glide_type',
      'description' => 'GLIDE Types taken from glidenumber.net',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
