<?php
include 'koneksi.php';
if (isset($_POST['id_buku'])) {
    $query = $connect->query("SELECT * FROM buku WHERE id_buku = '$_POST[id_buku]'");
    $data  = $query->fetch(PDO::FETCH_ASSOC);
} else {
    echo "ID tidak tersedia!
<a href='tampil_buku.php'>Kembali</a>";
    exit();
}
 
if ($data === false) {
    echo "Data tidak ditemukan!
<a href='tampil_buku.php'>Kembali</a>";
    exit();
}
?>
<h1 align="center">Edit Data Buku</h1>
<fieldset style="width: 50%; margin: auto;">
    <legend>Form Input Data Buku</legend>
     
    <form action="hapus_buku.php" method="post">
	
			<input type="hidden" name="id_buku" value="<?php echo $data['id_buku']; ?>" />
        <p>
            Judul Buku
 
            <input type="text" name="judul_buku" required value="<?php echo $data['judul_buku']; ?>"/>
        </p>
         
        <p>
            Nama Pengarang
 
            <input type="text" name="nama_pengarang" required value="<?php echo $data['nama_pengarang']; ?>"/>

        </p>
         
        <p>
            Penerbit Buku
 
             <input type="text" name="penerbit_buku" required value="
			 <?php echo $data['penerbit_buku']; ?>"/>
        </p>
         
        <p>
            <input type="submit" value="Simpan" />
            <input type="reset" value="Reset" onclick="return confirm('hapus data yang telah diinput?')">
        </p>
    </form>
</fieldset>
 
 
<center><a href="tampil_buku.php">≪ Tabel Data Buku</a></center>