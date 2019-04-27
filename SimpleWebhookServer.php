<?php
$RequestHeaders = getallheaders();
$json = file_get_contents('php://input');
$RequestBody = json_decode($json, true);
error_log(print_r($RequestHeaders, true), 3, 'RequestHeaders.log');
error_log(print_r($RequestBody, true), 3, 'RequestBody.log');
