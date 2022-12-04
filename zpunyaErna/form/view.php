<html>
<head>
    <title>Data Pakaian</title>
</head>
<body>
    <table border=1 width="30%">
        <tr>
            <th>Id_Anggota</th>
            <th>Nama_Barang</th>
            <th>Harga_Satuan</th>
            <th>Tanggal_Masuk</th>
			<th>Jumlah_Stok</th>
        </tr>
        <? include "koneksi.php";
 $query="select * from data_barang";
           // $query=mysql_query($query);
            $id_anggota==1;
            while ($row=mysql_fetch_array($query)) { ?>
        <tr>
        
            <td><?php echo $row['nama_barang'];?></td>
            <td><?php echo $row['harga_satuan'];?></td>
            <td><?php echo $row['tgl_masuk'];?></td>
			<td><?php echo $row['jumlah_stok'];?></td>
        </tr>
        <? $id_anggota++; } ?>
    </table>
    <a href='login.php'>Input Lagi</a></br>
</body>
</html>
