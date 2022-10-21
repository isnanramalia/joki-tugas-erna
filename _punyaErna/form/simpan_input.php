<?php

include "koneksi.php";
//$idbarang=$_POST['id_barang'];
$nama=$_POST['nama_barang'];
$harga=$_POST['harga_satuan'];
$tgl=$_POST['tgl_masuk'];
$jumlah=$_POST['jumlah_stok'];

$query = "insert into data_barang(nama_barang,harga_satuan,tgl_masuk,jumlah_stok) 
          values('$nama','$harga','$tgl','$jumlah')";
$exe=mysql_query($query);

	echo"<a href='form_input.php'>Input Lagi</a></br>";
	echo"<a href='view.php'>Lihat Hasil Input</a>";
?>