<?php
include "koneksi.php";
$username=$_POST['username'];
$password=$_POST['password'];

$query = "insert into login(username,password) 
          values('$username','$password')";
$exe=mysql_query($query);

	echo"<a href='form_input.php'>Ingin Input?</a></br>";
	echo"<a href='form_input.php'>Klik Disini</a>";
?>