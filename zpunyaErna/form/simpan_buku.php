<?php

include "koneksi.php";
//$id_buku=$_POST['id_buku'];
$judul=$_POST['judul_buku'];
$nama=$_POST['nama_pengarang'];
$penerbit=$_POST['penerbit_buku'];

$query = "insert into buku(judul_buku,nama_pengarang,penerbit_buku) 
          values('$judul','$nama','$penerbit')";
$exe=mysql_query($query);

	echo"<a href='edit_input_buku.php'>Input Lagi?</a></br>";
	echo"<a href='edit_buku.php'>Klik Disini</a>";
?>