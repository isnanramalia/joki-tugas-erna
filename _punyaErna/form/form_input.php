<!DOCTYPE html>
<html>
    <head>
        <title>Data Barang</title>
    </head>
    <body>
        <form method="post" action="simpan_input.php">
            <table>
              
                <tr><td>NAMA</td><td><input type="text" name="nama_barang"></td></tr>
                <tr><td>HARGA</td><td><input type="text" name="harga_satuan"></td></tr>
				<tr><td>TANGGAL</td><td><input type="text" name="tgl_masuk"></td></tr>
				<tr><td>JUMLAH</td><td><input type="text" name="jumlah_stok"></td></tr>
                <tr><td colspan="2"><button type="submit" value="simpan">SIMPAN</button></td></tr>
            </table>
        </form>
    </body>
</html>