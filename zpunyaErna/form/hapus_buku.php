<?php
include 'koneksi.php';
if (isset($_POST['id_buku'])) {
    $connect->exec("DELETE FROM buku WHERE id_buku = '$_POST[id_buku]'");
}
header("location:tampil_buku.php")
?>