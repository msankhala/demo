<?php
/**
 * Project entity class extending the Entity class
 */
class ProjectEntity extends Entity {

  /**
   * Change the default URI from default/id to project/id
   */
  protected function defaultUri() {
    return array('path' => 'project/' . $this->identifier());
  }

}