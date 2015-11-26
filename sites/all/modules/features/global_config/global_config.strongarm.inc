<?php
/**
 * @file
 * global_config.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function global_config_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_producto';
  $strongarm->value = 'edit-comment';
  $export['additional_settings__active_tab_producto'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme';
  $strongarm->value = 'seven';
  $export['admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'block_cache';
  $strongarm->value = 1;
  $export['block_cache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache';
  $strongarm->value = 1;
  $export['cache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_class_cache_ctools_css';
  $strongarm->value = 'CToolsCssCache';
  $export['cache_class_cache_ctools_css'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_lifetime';
  $strongarm->value = '0';
  $export['cache_lifetime'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clean_url';
  $strongarm->value = '1';
  $export['clean_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_producto';
  $strongarm->value = 0;
  $export['comment_anonymous_producto'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_producto';
  $strongarm->value = 1;
  $export['comment_default_mode_producto'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_producto';
  $strongarm->value = '10';
  $export['comment_default_per_page_producto'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_producto';
  $strongarm->value = 1;
  $export['comment_form_location_producto'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_page';
  $strongarm->value = 0;
  $export['comment_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_producto';
  $strongarm->value = '1';
  $export['comment_preview_producto'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_producto';
  $strongarm->value = '2';
  $export['comment_producto'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_producto';
  $strongarm->value = 1;
  $export['comment_subject_field_producto'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'context_block_rebuild_needed';
  $strongarm->value = TRUE;
  $export['context_block_rebuild_needed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cron_key';
  $strongarm->value = 'dXs1tvP7p3tCC8E-na5LwQILK8l0oGe2VSMx8g25zMk';
  $export['cron_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cron_last';
  $strongarm->value = 1448482531;
  $export['cron_last'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'css_js_query_string';
  $strongarm->value = 'nye3of';
  $export['css_js_query_string'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ctools_last_cron';
  $strongarm->value = 1448397863;
  $export['ctools_last_cron'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_default_timezone';
  $strongarm->value = 'America/Costa_Rica';
  $export['date_default_timezone'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'drupal_css_cache_files';
  $strongarm->value = array(
    '823ba1006db72809515d2221cd02ec1075d7b49b0c07f49307b3a7930bfdd9e4' => 'public://css/css_xE-rWrJf-fncB6ztZfd2huxqgxu4WO-qwma6Xer30m4.css',
    '592db66916e1dd3416cbe95bcb34a5a68775eb0b7cf95e4c858671de35290cc9' => 'public://css/css_LS9OUalDR9-d_lCAvF3yUWjNU6yF8ZBm84jEPRvoyuQ.css',
    '1fdec2c6187495cf3d58dcc2360930e464a517f5db2c9d97fad8d0d93439f894' => 'public://css/css_QUz3hwdODK5315J1349tK2XCx0_-zxgPS8z2kJh7qOo.css',
    'dc9eb52e5c483ab74dba338456bd8a6fe4b4c16b6f5228492fb4ef0cbaa3a4d8' => 'public://css/css_KGIgb3NbzLBiCUV4OnH1NMoTJDv0i17jGhL6FKS5C70.css',
    'ebb3f433ad4107b1ac31e9d7de0f9a5d399040e9f82b6364211dcfaadea158c0' => 'public://css/css_Nv0ct-zkzztuah_LbaPFF8ZkdSEk-LxBtTWMm9mN_F8.css',
    'cb9f93e666a396bb3eb14c5fd16f7ebd1cdd0067733eb0a2ab1b294b6f14f76f' => 'public://css/css_1kF33EODTO5gDyEbdpAfYzMKbjG3ottD1s5np0BNI8U.css',
    '372c2dc1c8b29a68778b50f6ab4246acdb32cbcd70d9de44b14805ab4a1ec0cf' => 'public://css/css_cl3KNhlULzTbmVdZ2-HfGLyvd6hpOMkpxEzxWFVkKiY.css',
    '3b3db4675b4cade1896516e76a57c8578450399354ff3e19d29a3b7ab264991c' => 'public://css/css_1QYsZVIB_V8VXuMe6JW9Kxrg2ZgIBvUpLdFvy4wXaf8.css',
    '1dd22045c385fbba41a3939074721073e8c13c6d4f62b0be1580888f6aa1c5ac' => 'public://css/css_nOe7VwDU9uYz9a4cT0jU2XPFMYkvUv2c-P6MYXbL-rY.css',
    '032d72e2b3124645b11e59c23005327dc2b450af6aaa6bf3cad34a6a65a9d774' => 'public://css/css_ZDWl28hdmeinIcKg-HMrN6uKD0nTMld5NlXLmm5MH2U.css',
    '812d96c2a70250b7821e0f92621899cf387a2508d0708293df181790495d954a' => 'public://css/css_t0UdX6otSgdqIhujBgmUs0IONGhlTgX_talcJyDPYO0.css',
    '3d21af1bd54f977ca930edc5737cbf0062271c12e4fca16b43909e11a94f7d23' => 'public://css/css_QK4xHIX4yw7tvj3UoWUu1q4bBOj-Pp_Q_-pHep5pMzo.css',
    'f05494fc83c9c8e2c74180252d01c9ea50f347143d606c3ea4a216ea0f24ce6e' => 'public://css/css_BR3eb_ceEn8jEAv9rAj8_gjpfC6A1BpCm8JGn5sUfnY.css',
    '29e035aa878b479b47bd4d5b55beb662195d999a19d3f2c69375aee16a501e61' => 'public://css/css_SI1C9iwn47l2AyI8dv28JMjZFFF3vgDb_suKwuTnTWQ.css',
    '4075059a4ada44d2e785820e84729b2073f0c324434c12f6ebd5a92c68a10595' => 'public://css/css_TbWeJbRM802XKO7sUePWfvvGnhtaCDKldANw2xfhsMA.css',
    '11142903bf06c851696b0b2055d0a508d27d5d368bfcebf83238dbeac4098664' => 'public://css/css__INfjhvcNYk9Z7cFPCYx5PgJP1lBQBvSiZVByPIgcuY.css',
    '35f351d024d00bf96c58e3cddf1e6dd5edb44a57f2f3f8ee064133b1d16e82bb' => 'public://css/css_ECQhX3XHXEvgGDeF-i0xS3_SuMkHJ2ltlmbdcRTUU3I.css',
    'b336d9272c342b920806e1c556fe27f42cf787d339632dbf0720cc2c3d39b8ee' => 'public://css/css_CKq3f_bl4zZZnZ9uWT-JFfEYJ2FLvpCg8IU6OwrvNa0.css',
    'b52fd436b4181f67eae362cb15894888e4903bc1eaa1e8ba825110b60a114328' => 'public://css/css_9W8PejxevKdqytIe9ExSCThJy8nHqAqyilnqR8XfZQ8.css',
    '1ca0521b18a3f204a9047f5211d5fbfee58c2ede38a4c52297c5e37e36f7a921' => 'public://css/css_xvrx19sVxS11FYApN-doLobBHBqky-D9Y0Rn2eRyjG8.css',
    '9364ecaf379728c31bc5c8a1c5d5a7ac2d951e5554bdc9022c9e3e95b1ef41df' => 'public://css/css_idm92wpT8TEQjqby0hL7rYyTCQYn3w5NRZSnGjTyo-8.css',
    'fb99f59634ca50e0fba4e84e68023155e5b29a96985d8a76309ce0a0db1009a9' => 'public://css/css_jIvZpVfuY4FgJzZ7mYHIG4cYOyD0nJ03Bw5wiLVkAh8.css',
  );
  $export['drupal_css_cache_files'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'drupal_http_request_fails';
  $strongarm->value = FALSE;
  $export['drupal_http_request_fails'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'drupal_js_cache_files';
  $strongarm->value = array(
    'a571bc4156d0556568d7f04bc93f81c658b2e21fef9bb8229528c077ce9a0ccf' => 'public://js/js_UWQINlriydSoeSiGQxToOUdv493zEa7dpsXC1OtYlZU.js',
    'dc589b931794ec265c5d55262b3866518c4b47f9ba802d69485397c7b7b7a77e' => 'public://js/js_YG82hrJHloYtiAgodMftPUgRoUSS3dqXQsi0bze1iqY.js',
    'f61b9db830350055d5ace3d3163958ed44e221ac0c8cd819020d9529ecb5cb36' => 'public://js/js_VuH1z-PRXSqkF15tbZhNTFeQi8KUjGswvcyXpn84oyY.js',
    '44cb3b156265b0c92e40ce9d89ba673c268b3427938d4c60080f18566f99ece0' => 'public://js/js_xvm7cjNm1Rqr1Cj8HbgvarbtUA_akfYY_XqKbLUZfvY.js',
    '572d229946cfc94573d1b41240c9ee70531334413097fadfaa34b93467e6c7d6' => 'public://js/js_nyhRfvT3G0O_yE5xvilF1OwqvbGkcQ6PIhmVeNf-Y2g.js',
    'ff2d5d51d44872ed61a4930a3f443f5672fe13c57b52c4d2ca972c8085e26bdf' => 'public://js/js_zUh6Jn9Su8HiER5wefeuwsDe2W7eQ153A7FZV5W2Kek.js',
    'c3f10e598d8d0e900e3f8a052550e3f41b386ea2951e3c262a4317f4e3853a4a' => 'public://js/js_wGI4YXrM-7KbiCpCkFMOUG4lmZUUsaOLHv9pwXXLfgA.js',
    '1a30c351624a627553d78983ad986922fa2576d2391858497e3ca6bb022b6015' => 'public://js/js_CC-zfeuQHcDhFtVRuKW53h30TL7j_105J32Nz8b8R38.js',
    'c037ca7eb39e397d279a3eebdbd1d852d9e837421744bc64fd777cf1bb4334bf' => 'public://js/js_nY0Mg2bgvmmJx9uIbTe6afk4NZpNaNX_zFqLzWr1R78.js',
    '2582b4a3b228a9d6312dd227ade6825bc017b0a4469c893fbc0c1abacfc8af09' => 'public://js/js_4VtNmz_okd8RoS3VoCTDgiiBjCfH8aqDxhYcJBi9Zxs.js',
    '07dd2fbe8344b4d868db1bc72c0c242be35c3ae3066bd6a78237cce19686d3ba' => 'public://js/js_ChFyHQViP-Y3tPaA3Wt1oZxJT84sEQvHXzmet91Rms4.js',
    '111d860265abe08204bdf363fb75e432b0104dd26ec9ad3853b748098098279b' => 'public://js/js_KCd8rbJYUruV1tRJnh4um34UYvyhlrSVCPR1jNko2h8.js',
    'b2dac80238205f55202fcc37b830cf96471f2a6b8c3315f8c9cf5b876446bc2c' => 'public://js/js_WeW9FvZ8s2xJFyt1FdSbnfEhJ9-_YCQhAChRH07-J_I.js',
    '8ed0c4dc16644958e3caf1e65148709069b4f816d47e60e29b24db55a1b657d1' => 'public://js/js_aAlGj0C4DI7o_m9IO_M_DJP1CK2P4W9TmeC9iZ9SSKQ.js',
    'fba9f414cfe07b38308a99995530762c2d5d5c4796a6d4fe471859d6174b03bb' => 'public://js/js_pNxAfLpwJxe8RU15RJji8W5OBBEbpVG11P69QHTU9sc.js',
    '18369d3dd87e7b449c30c5c51bb9113e0e5f182832a6c39a3400619e84988232' => 'public://js/js_W0FhQR0PjLdMszexLuyaRlgGOMWETdW_msNfgBRxiyY.js',
    '0f8492819dd6dd4eaed3a0366a87d2d8f5ede0aa3ce22da3cd179c70ae5a9f2a' => 'public://js/js_hpcCdCLoG9XcmlM5l8NOV0E-TKYmwDasqS64bMyffxU.js',
    '29172097391a0220ea5afdc8bd83ad7cafa276c10675cea8b3493a594f11b4cc' => 'public://js/js_mgJKjlF-gtKodPqU1NWvUyrmb09ptIgaak-jSp-885M.js',
    '64a730ea113b703945f4d814f29a347ebbfdb4717808a56dc6c8b356da031669' => 'public://js/js_McAWGFRmtKlM2kiafQfVmSZCfL0vAVchhchaNKfIq2g.js',
    'f71d00daac5e9b5143c7e1db5d5a0a6c0772c7d9d486be9b07daf15334985763' => 'public://js/js_lc3N0WS1mcV6odNkPBgEoqR4n289CGGWn4ps0J6O4ME.js',
    '6aacda919d5663a31b0be00d3e8e26cdfe6a5192be29fe849b83c43da7b40c7b' => 'public://js/js_Kd6pUbLR6yNbMqtdFLwgYzfH0VLd8onOZ5LE6SxvRwc.js',
    '658fd3164c10a1b64e538e352f6544eb55c98d911c8ece7248b4a02353301e33' => 'public://js/js_L8YkDQPn9uCUwDKXT06SyK-HpGBQz7mZHV2BSzAWJ70.js',
    '0b39d742c4b3da97e4ff4036cc7fca0424dbfb6441d1b5803ca0dc488841b128' => 'public://js/js_5_n1mWgmKo4xMmeu7ICdF0cCbiole6QfHlbiMaHHhXo.js',
    '5ca0afe01bbb6a6b62eb776178ede24dbde614d0c0f19c5228a702b2b94c77b7' => 'public://js/js_N-OJdU_dLSzbbeA8dgAcp7FTc32Z--o39GAaAaNFyNw.js',
    '6b404270458e6e11a1caadc97b75947a6c721a38fd305ae749a9a1afbbccf1b5' => 'public://js/js_u6wUBNR29nMaVR29GgypC-xlYnB-qp9m1mQ381QC-yk.js',
    'a7946890a33ec983b3b4bec772566b3487dd025becf597bc511bbaf039f78ee3' => 'public://js/js_0wQfq2PlLMMo_-D7AEew2jMaQsnyZ-4UTZzGpOFUywA.js',
    'dfd2ad848456997fbb872c376ceb49490d55d442d1f83341ffdd820ac81847e0' => 'public://js/js_R8fiQGCPq_-hh_QnqFEjdsqF_DbNVuxP8cS_UuU1h7U.js',
    '51912aefbf90d2b4c80dc023695195a4a09bbacab0da67175cf67ec1a3e7b803' => 'public://js/js_cyMM8LWJnjj9HKH-29oT6CebO_jNPJEicmEd7Ldra9o.js',
    '1a59483660a4263dccfd2bae4aae83e1fdcd04a578a330a2de35ed1f4a5e4740' => 'public://js/js_0HBuGBeWmu5PATaw8Rh6iBnCsz-IqXgU-e-ITWj969s.js',
  );
  $export['drupal_js_cache_files'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'drupal_private_key';
  $strongarm->value = 'sfkZHYCgWpQwSJiZghTueKa8k9oAkFFzERQY17WSMMA';
  $export['drupal_private_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_ignored_orphans';
  $strongarm->value = array();
  $export['features_ignored_orphans'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_modules_changed';
  $strongarm->value = FALSE;
  $export['features_modules_changed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_comment__comment_node_article';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_comment__comment_node_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_comment__comment_node_producto';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'author' => array(
          'weight' => '0',
        ),
        'subject' => array(
          'weight' => '1',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_comment__comment_node_producto'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__producto';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '1',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__producto'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_taxonomy_term__categorias';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'description' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_taxonomy_term__categorias'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_user__user';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'summary' => array(
          'default' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_user__user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_temporary_path';
  $strongarm->value = '/tmp';
  $export['file_temporary_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'filter_fallback_format';
  $strongarm->value = 'plain_text';
  $export['filter_fallback_format'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fivestar_tags';
  $strongarm->value = 'vote';
  $export['fivestar_tags'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'install_profile';
  $strongarm->value = 'pantheon';
  $export['install_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'install_task';
  $strongarm->value = 'done';
  $export['install_task'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'install_time';
  $strongarm->value = 1448120833;
  $export['install_time'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'javascript_parsed';
  $strongarm->value = array(
    0 => 'misc/drupal.js',
    1 => 'misc/jquery.js',
    2 => 'misc/jquery.once.js',
    3 => 'sites/all/modules/video/js/video.js',
    4 => 'sites/all/modules/devel/devel_krumo_path.js',
    5 => 'sites/all/modules/features/features.js',
    6 => 'misc/tableheader.js',
    7 => 'misc/form.js',
    8 => 'misc/vertical-tabs.js',
    9 => 'sites/all/modules/admin_menu/admin_menu.js',
    10 => 'sites/all/modules/admin_menu/admin_menu_toolbar/admin_menu_toolbar.js',
    11 => 'misc/collapse.js',
    12 => 'misc/machine-name.js',
    13 => 'misc/autocomplete.js',
    14 => 'misc/jquery.cookie.js',
    15 => 'misc/jquery.form.js',
    16 => 'misc/progress.js',
    17 => 'misc/ajax.js',
    18 => 'misc/ui/jquery.ui.core.min.js',
    19 => 'misc/ui/jquery.ui.widget.min.js',
    20 => 'misc/ui/jquery.ui.button.min.js',
    21 => 'misc/ui/jquery.ui.mouse.min.js',
    22 => 'misc/ui/jquery.ui.draggable.min.js',
    23 => 'misc/ui/jquery.ui.position.min.js',
    24 => 'misc/ui/jquery.ui.resizable.min.js',
    25 => 'misc/ui/jquery.ui.dialog.min.js',
    26 => 'sites/all/modules/views/js/jquery.ui.dialog.patch.js',
    27 => 'misc/textarea.js',
    28 => 'modules/comment/comment-node-form.js',
    29 => 'modules/menu/menu.admin.js',
    30 => 'modules/node/content_types.js',
    31 => 'modules/field_ui/field_ui.js',
    32 => 'misc/tabledrag.js',
    33 => 'sites/all/modules/ds/js/ds.admin.js',
    34 => 'sites/all/themes/manati/js/script.min.js',
    35 => 'modules/contextual/contextual.js',
    36 => 'modules/block/block.js',
    37 => 'sites/all/modules/ctools/js/modal.js',
    38 => 'sites/all/modules/token/token.js',
    39 => 'sites/all/modules/fivestar/js/fivestar.js',
    40 => 'sites/all/modules/ctools/js/dropbutton.js',
    41 => 'sites/all/modules/module_filter/js/module_filter.js',
    42 => 'misc/jquery.ba-bbq.js',
    43 => 'sites/all/modules/module_filter/js/modules.js',
    44 => 'sites/all/modules/module_filter/js/module_filter_tab.js',
    45 => 'sites/all/modules/module_filter/js/dynamic_position.js',
  );
  $export['javascript_parsed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_producto';
  $strongarm->value = '0';
  $export['language_content_type_producto'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_negotiation_language';
  $strongarm->value = array();
  $export['language_negotiation_language'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_negotiation_language_content';
  $strongarm->value = array(
    'locale-interface' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_interface',
      ),
      'file' => 'includes/locale.inc',
    ),
  );
  $export['language_negotiation_language_content'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_negotiation_language_url';
  $strongarm->value = array(
    'locale-url' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_url',
        'switcher' => 'locale_language_switcher_url',
        'url_rewrite' => 'locale_language_url_rewrite_url',
      ),
      'file' => 'includes/locale.inc',
    ),
    'locale-url-fallback' => array(
      'callbacks' => array(
        'language' => 'locale_language_url_fallback',
      ),
      'file' => 'includes/locale.inc',
    ),
  );
  $export['language_negotiation_language_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_types';
  $strongarm->value = array(
    'language' => TRUE,
    'language_content' => FALSE,
    'language_url' => FALSE,
  );
  $export['language_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_default_active_menus';
  $strongarm->value = array(
    1 => 'devel',
    2 => 'main-menu',
    3 => 'management',
    4 => 'navigation',
    5 => 'user-menu',
  );
  $export['menu_default_active_menus'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_expanded';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_expanded'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_masks';
  $strongarm->value = array(
    0 => 501,
    1 => 493,
    2 => 253,
    3 => 250,
    4 => 247,
    5 => 246,
    6 => 245,
    7 => 126,
    8 => 125,
    9 => 124,
    10 => 123,
    11 => 122,
    12 => 121,
    13 => 117,
    14 => 96,
    15 => 63,
    16 => 62,
    17 => 61,
    18 => 60,
    19 => 59,
    20 => 58,
    21 => 44,
    22 => 31,
    23 => 30,
    24 => 29,
    25 => 28,
    26 => 27,
    27 => 24,
    28 => 21,
    29 => 15,
    30 => 14,
    31 => 13,
    32 => 11,
    33 => 10,
    34 => 7,
    35 => 6,
    36 => 5,
    37 => 3,
    38 => 2,
    39 => 1,
  );
  $export['menu_masks'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_producto';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_producto'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_producto';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_producto'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'module_filter_recent_modules';
  $strongarm->value = array(
    'overlay' => 1448125351,
    'color' => 1448125488,
    'toolbar' => 1448125491,
    'admin_menu_toolbar' => 1448295543,
    'context_ui' => 1448384040,
    'devel' => 1448384640,
    'ds_ui' => 1448384040,
    'page_manager' => 1448384186,
    'locale' => 1448384186,
    'fieldable_panels_panes' => 1448384769,
    'pathauto' => 1448384731,
    'strongarm' => 1448384731,
    'panels_node' => 1448384424,
    'panels_ipe' => 1448384424,
    'views_ui' => 1448384424,
    'devel_generate' => 1448384640,
    'semantic_panels' => 1448384769,
    'wysiwyg' => 1448384640,
    'video_ui' => 1448404604,
  );
  $export['module_filter_recent_modules'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_admin_theme';
  $strongarm->value = '1';
  $export['node_admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_page';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_producto';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_producto'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_producto';
  $strongarm->value = '1';
  $export['node_preview_producto'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_page';
  $strongarm->value = FALSE;
  $export['node_submitted_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_producto';
  $strongarm->value = 0;
  $export['node_submitted_producto'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_cache_maximum_age';
  $strongarm->value = '900';
  $export['page_cache_maximum_age'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_compression';
  $strongarm->value = 0;
  $export['page_compression'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_blog_pattern';
  $strongarm->value = 'blogs/[user:name]';
  $export['pathauto_blog_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_forum_pattern';
  $strongarm->value = '[term:vocabulary]/[term:name]';
  $export['pathauto_forum_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_pattern';
  $strongarm->value = 'content/[node:title]';
  $export['pathauto_node_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_hyphen';
  $strongarm->value = 1;
  $export['pathauto_punctuation_hyphen'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_pattern';
  $strongarm->value = '[term:vocabulary]/[term:name]';
  $export['pathauto_taxonomy_term_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_user_pattern';
  $strongarm->value = 'users/[user:name]';
  $export['pathauto_user_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'path_alias_whitelist';
  $strongarm->value = array(
    'node' => TRUE,
    'taxonomy' => TRUE,
    'user' => TRUE,
  );
  $export['path_alias_whitelist'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'preprocess_css';
  $strongarm->value = 1;
  $export['preprocess_css'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'preprocess_js';
  $strongarm->value = 1;
  $export['preprocess_js'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'reviews_allow_multiple';
  $strongarm->value = '0';
  $export['reviews_allow_multiple'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'reviews_enabled';
  $strongarm->value = 0;
  $export['reviews_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_producto';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_producto'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_active_modules';
  $strongarm->value = array(
    'apachesolr_search' => 'apachesolr_search',
    'user' => 'user',
    'node' => 0,
  );
  $export['search_active_modules'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_default_module';
  $strongarm->value = 'apachesolr_search';
  $export['search_default_module'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_default_country';
  $strongarm->value = 'CR';
  $export['site_default_country'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_mail';
  $strongarm->value = 'bermukat@gmail.com';
  $export['site_mail'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = 'Proyecto Tienda Cetav';
  $export['site_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'manati';
  $export['theme_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'update_last_check';
  $strongarm->value = 1448482561;
  $export['update_last_check'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'update_notify_emails';
  $strongarm->value = array(
    0 => 'bermukat@gmail.com',
  );
  $export['update_notify_emails'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_admin_role';
  $strongarm->value = '3';
  $export['user_admin_role'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_pictures';
  $strongarm->value = '1';
  $export['user_pictures'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_dimensions';
  $strongarm->value = '1024x1024';
  $export['user_picture_dimensions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_file_size';
  $strongarm->value = '800';
  $export['user_picture_file_size'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_style';
  $strongarm->value = 'thumbnail';
  $export['user_picture_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_register';
  $strongarm->value = 2;
  $export['user_register'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_defaults';
  $strongarm->value = array(
    'taxonomy_term' => TRUE,
  );
  $export['views_defaults'] = $strongarm;

  return $export;
}
