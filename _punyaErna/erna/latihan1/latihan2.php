<html >
<head>
    <title><!-- Insert your title here --></title>
</head>
<body>
    <img src="walpaper.jpg" alt="gambar" class="bg" />
	 <div class="content">
	 <?php
session_start();
if(isset($_SESSION['username'])) {
  header('location:index.php'); }
  require_once("koneksi.php");
  ?>
 <title>Form Login</title>

  <center>
   <form action="proseslogin.php" method="post">
     <h1>Masuk</h1>
     <table>
       <tbody>
         <tr><td>Username</td><td> : <input name="username" type="text"></td></tr>
         <tr><td>Password</td><td> : <input name="password" type="password"></td></tr>
         <tr><td colspan="2" align="right"><input value="Login" type="submit"> <input value="Batal" type="reset"></td></tr>
         <tr><td colspan="2" align="center">Belum Punya akun ? <a href="daftar.php"><b>Daftar</b></a></td></tr>
       </tbody>
     </table>
   </form>
 </center>
 </div>
</body>
</html>