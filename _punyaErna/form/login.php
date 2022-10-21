<html>
<head>
<title>DataPakaian</title>
</head>
<body>
<h1>Form Input Data Pakaian</h1>
<style>
body{
	margin: 0;
	padding: 0;
	background: url('walpaper.jpg');
	background-size: cover;
	background-position: center;
	font-family: sans-serif;
}
</style>
<form name="input_data" action="insert.php" method="post">
<table border="0" cellpadding="5" cellspacing="0">
<tbody>
<tr>
	<td>username</td>
	<td>:</td>
	<td><input type="text" name="id_user"maxlenght="20" required="required"/></td>
</tr>
<tr>
	<td>password</td>
	<td>:</td>
	<td><input type="password" name="password"maxlenght="20" required="required"/></td>
</tr>
<tr>
	<td align="right"colspan="3"><input type="submit" name="submit" value="login"/></td>
</tr>
</tbody>
</table>
</form>
</body>
</html>