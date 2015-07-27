<?php session_start(); ?>
<HTML>
<BODY>  
<link rel="stylesheet" type="text/css" href="style.css" media="screen" />

<div id="wrap">
        <div id="top">
            <h2> <a href="http://people.oregonstate.edu/~stinek/proShop/index.html">Pro Shop Management</a></h2>
        <div id="menu">
          <ul>
            <li><a href="http://people.oregonstate.edu/~stinek/proShop/courseList.php">List Courses</a></li> 
            <li><a href="http://people.oregonstate.edu/~stinek/proShop/memberLogin.php">Member Sign-In</a></li>
            <li><a href="http://people.oregonstate.edu/~stinek/proShop/employeeLogin.php">Employee Sign-In</a></li> 
            <li><a href="http://people.oregonstate.edu/~stinek/proShop/signUp.php">Sign Up</a></li>
          </ul>
        </div>
      </div>
    <div id="content">
        <div id="middle">

<?php
    $dbhost = 'oniddb.cws.oregonstate.edu';
    $dbname = 'stinek-db';
    $dbuser = 'stinek-db';
    $dbpass = 'CLmPCQKB5rV0GSgi';

    $mysql_handle = mysql_connect($dbhost, $dbuser, $dbpass)
        or die("Error connecting to database server");

    mysql_select_db($dbname, $mysql_handle)
        or die("Error selecting database: $dbname");

    $ID = ($_POST['mID']);
    $_SESSION['mID'] = $mID;

    $name        = ("SELECT firstName, lastName FROM Customers WHERE mID = '$ID'");
    $result      = mysql_query($name);
    $name_result = mysql_fetch_array($result);

    print mysql_error();
    mysql_close($mysql_handle);
?>

Welcome Back <?php  echo $name_result['firstName'], " ", $name_result['lastName']; ?>

<p>To set up a tee time, please click <a href="http://people.oregonstate.edu/~stinek/proShop/times.php">here</a></p>
<p>To view the inventory of the Pro Shop, please click <a href="http://people.oregonstate.edu/~stinek/proShop/inventory.php">here</a></p>

            
            
            </div>
        </div>
    </div>
</BODY>
</HTML>