<HTML>
<BODY>  
<link rel="stylesheet" type="text/css" href="style.css" media="screen" />

<?php
    $dbhost = 'oniddb.cws.oregonstate.edu';
    $dbname = 'stinek-db';
    $dbuser = 'stinek-db';
    $dbpass = 'CLmPCQKB5rV0GSgi';

    $mysql_handle = mysql_connect($dbhost, $dbuser, $dbpass)
        or die("Error connecting to database server");

    mysql_select_db($dbname, $mysql_handle)
        or die("Error selecting database: $dbname");

    
    mysql_close($mysql_handle);
?>    

<div id="wrap">
        <div id="top">
            <h2> <a href="http://people.oregonstate.edu/~stinek/proShop/index.html">Pro Shop Management</a></h2>
        <div id="menu">
          <ul>
            <li><a href="http://people.oregonstate.edu/~stinek/proShop/memberLogin.php">Member Sign-In</a></li>
            <li><a href="http://people.oregonstate.edu/~stinek/proShop/employeeLogin.php">Employee Sign-In</a></li> 
            <li><a href="http://people.oregonstate.edu/~stinek/proShop/signUp.php">Sign Up</a></li>
          </ul>
        </div>
      </div>
    <div id="content">
        <div id="middle">



            </div>
        </div>
    </div>
</BODY>
</HTML>