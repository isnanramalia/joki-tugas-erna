<?php
include 'koneksi.php';
?>
<style>
    tbody > tr:nth-child(2n+1) > td, tbody > tr:nth-child(2n+1) > th {
        background-color: #ededed;
    }
    table{
        width: 70%;
        margin: auto;
        border-collapse: collapse;
        box-shadow: darkgrey 3px;
    }
    thead tr {
        background-color: #36c2ff;
    }
</style>
 
<h1 align="center">Tabel DATA BUKU</h1>
 
<center><a href="form_input_buku.php">Input DATA BUKU  </a></center>
 
 
<table border="1">
    <thead>
        <tr>
            <th>Id Buku</th>
            <th>Judul Buku</th>
            <th>Nama Pengarang</th>
            <th>Penerbit  Buku</th>
            <th>Pilihan</th>
        </tr>
    </thead>
     
    <tbody>
    <?php
    $sql = "SELECT * FROM buku ORDER BY id_buku";
    $id_buku  = 1;
    foreach ($connect->query($sql) as $value) :
    ?>
        <tr>
            <td><?php echo $id_buku++; ?></td>
            <td><?php echo $data['judul_buku'] ?></td>
            <td><?php echo $data['nama_pengarang'] ?></td>
            <td><?php echo $data['penerbit_buku'] ?></td>
            <td align="center">
                <a href="edit.php?id=<?php echo $data['id'] ?>">edit</a>
                   
                <a href="hapus.php?id=<?php echo $data['id'] ?>" 
				onclick="return confirm('Anda yakin akan menghapus data?')">hapus</a>
            </td>
        </tr>
    <?php
    endforeach;
    ?>
    </tbody>
</table>