<?php
/**
 * @file
 * Code for the OS2Web front page views feature - User committees.
 */
 
/////////////////////////////////////////header START /////////////////////////////////////////
function os2dagsorden_front_page_views_user_committees_help_text(){
  print '<div class="help-button" title="' . variable_get('os2dagsorden_user_committees_help_text', 'Her kan du se de udvalg du er medlem af. Ret henvendelse til Direktionssekretariatet hvis du mener det skal ændres.') . '"></div>';
}
/////////////////////////////////////////header END /////////////////////////////////////////