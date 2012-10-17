<?php
/**
 * @file
 * oc_maps.openlayers_maps.inc
 */

/**
 * Implements hook_openlayers_maps().
 */
function oc_maps_openlayers_maps() {
  $export = array();

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'ding_library_map_odense';
  $openlayers_maps->title = 'Ding! library map Odense';
  $openlayers_maps->description = 'Map of libraries ';
  $openlayers_maps->data = array(
    'width' => 'auto',
    'height' => '225px',
    'image_path' => 'profiles/ding2/libraries/openlayers_themes/dark/',
    'css_path' => '',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '10.384192447589, 55.396239025129',
        'zoom' => '11',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_fullscreen' => array(
        'activated' => 0,
      ),
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
        'zoomBoxEnabled' => 1,
        'documentDrag' => 0,
      ),
      'openlayers_behavior_panzoom' => array(),
      'openlayers_behavior_tooltip' => array(
        'layers' => array(
          'ding_library_openlayers_1' => 'ding_library_openlayers_1',
        ),
      ),
    ),
    'default_layer' => 'osm_mapnik',
    'layers' => array(
      'osm_mapnik' => 'osm_mapnik',
      'ding_library_openlayers_1' => 'ding_library_openlayers_1',
    ),
    'layer_weight' => array(
      'ding_library_openlayers_1' => '0',
      'openlayers_geojson_picture_this' => '0',
      'geofield_formatter' => '0',
    ),
    'layer_styles' => array(
      'geofield_formatter' => '0',
      'openlayers_geojson_picture_this' => '0',
      'ding_library_openlayers_1' => 'default_marker_blue',
    ),
    'layer_styles_select' => array(
      'geofield_formatter' => '0',
      'openlayers_geojson_picture_this' => '0',
      'ding_library_openlayers_1' => '0',
    ),
    'layer_activated' => array(
      'ding_library_openlayers_1' => 'ding_library_openlayers_1',
      'geofield_formatter' => 0,
      'openlayers_geojson_picture_this' => 0,
    ),
    'layer_switcher' => array(
      'geofield_formatter' => 0,
      'openlayers_geojson_picture_this' => 0,
      'ding_library_openlayers_1' => 0,
    ),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'default_marker_blue',
      'select' => 'default',
      'temporary' => 'default',
    ),
  );
  $export['ding_library_map_odense'] = $openlayers_maps;

  return $export;
}
