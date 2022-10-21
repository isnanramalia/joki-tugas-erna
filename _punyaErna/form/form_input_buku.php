<!DOCTYPE html>
<html>
    <head>
        <title>MEMASUKAN DATA BUKU</title>
    </head>
    <body>
        <form method="post" action="tampil_buku.php">
            <table>
              
                <tr><td>JUDUL</td><td><input type="text" name="judul_buku"></td></tr>
                <tr><td>NAMA</td><td><input type="text" name="nama_pengarang"></td></tr>
				<tr><td>PENERBIT</td><td><input type="text" name="penerbit_buku"></td></tr>
                <tr><td colspan="2"><button type="submit" value="simpan_buku">SIMPAN</button></td></tr>
            </table>
        </form>
    </body>
</html>