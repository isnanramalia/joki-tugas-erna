<?php
session_start();
if(isset($_SESSION['username'])) {
  header('location:index.php'); }
  require_once("koneksi.php");
  ?>
 <title>Form Login</title>

  <center>
  <img src="image/<?php echo $data['walpaper']; ?>" border="0"/>
   <form action="proseslogin.php" method="post">
     <h1>Masuk</h1>
     <table>
       <tbody>
         <tr><td>Username</td><td> : <input name="username" type="text"></td></tr>
         <tr><td>Password</td><td> : <input name="password" type="password"></td></tr>
         <tr><td colspan="2" align="right"><input value="Login" type="submit"> <input value="Batal" type="reset"></td></tr>
       </tbody>
     </table>
   </form>
 </center>