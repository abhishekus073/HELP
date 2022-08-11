<?php
echo "<h1> refresh page </h1>";
$file = 'count.txt';
$c = file_get_contents($file);
file_put_contents ($file, $c+1);
echo 'the number of users visited:',$c ;
?>


