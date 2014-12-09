# Demo module for creating custom drupal entity.

This is demo module for creating custom drupal entity with drupal [entity api](http://drupal.org/project/entity) module.

- This module create a `project` entity and provide uri for each entity created with uri_callback so that each entity is accessible at `project/[entityid]`.
- Provide the admin ui for each entity so that user can add/edit the entity through admin gui.
- Then make this entity fieldable so that user can add fields to this custom entity with gui.
- Then expose this entity to views.