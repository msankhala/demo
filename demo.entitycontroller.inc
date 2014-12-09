<?php
/**
 * Extending the EntityAPIController for the Project entity.
 */
class ProjectEntityController extends EntityAPIController {

  public function buildContent($entity, $view_mode = 'full', $langcode = NULL, $content = array()) {

  $build = parent::buildContent($entity, $view_mode, $langcode, $content);

  // Our additions to the $build render array
  $build['description'] = array(
    '#type' => 'markup',
    '#markup' => check_plain($entity->description),
    '#prefix' => '<div class="project-description">',
    '#suffix' => '</div>',
  );
  $build['deadline'] = array(
    '#type' => 'markup',
    '#markup' => date('d F, Y', check_plain($entity->deadline)),
    '#prefix' => '<p>Deadline: ',
    '#suffix' => '</p>',
  );
  
  return $build;

  }
}