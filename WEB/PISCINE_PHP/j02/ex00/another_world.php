#!/usr/bin/php
<?PHP
$elem = $argv[1];
$elem = preg_replace('/[\s\t]+/', ' ', $elem);
$elem = trim($elem);
if ($elem)
	echo $elem."\n";
?>
