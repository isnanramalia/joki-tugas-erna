<?php
$host="localhost";
$user="root";
$pass="";
$dbname="data_pakaian";
$connect=mysql_connect($host,$user,$pass)or die(mysql_error());
$db_select=mysql_select_db($dbname);
?>