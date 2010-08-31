<?php

/**
 * Implementation of hook_views_default_views().
 */
function userfinder_views_default_views() {
  module_load_include('inc', 'userfinder', 'userfinder.features.views');
  $args = func_get_args();
  return call_user_func_array('_userfinder_views_default_views', $args);
}
