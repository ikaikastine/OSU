<?php session_start(); ?>
<HTML>
<HEAD>
<TITLE>Student Information</TITLE>
<link rel="stylesheet" type="text/css" href="style.css" media="screen" />
</HEAD>
   
    
<?php
session_start();

$dbhost = 'oniddb.cws.oregonstate.edu';
$dbname = 'stinek-db';
$dbuser = 'stinek-db';
$dbpass = 'CLmPCQKB5rV0GSgi';

$mysql_handle = mysql_connect($dbhost, $dbuser, $dbpass)
    or die("Error connecting to database server");

mysql_select_db($dbname, $mysql_handle)
    or die("Error selecting database: $dbname");

//echo 'Successfully connected to database!';

?>
    
<div id="wrap">
        <div id="top">
            <h2> <a href="http://people.oregonstate.edu/~stinek/welcome.html">Student Database</a></h2>
        <div id="menu">
          <ul>
            <li><a href="http://people.oregonstate.edu/~stinek/student.php">New Students</a></li>
            <li><a href="http://people.oregonstate.edu/~stinek/returnStudent.php">Returning Students</a></li>
            <li><a href="http://people.oregonstate.edu/~stinek/courseInformation.php">Course Information</a></li>
            <li><a href="http://people.oregonstate.edu/~stinek/listHome.php">Student Information</a></li>
            
          </ul>
        </div>
      </div>
    <div id="content">
        <div id="middle">
          <h2>Welcome, Returning Students!</h2>
            <form action="returnStudentInfo.php" method="post">
            Enter your 9 Digit Student Number: <input name="ID" size="7"><br>
            <input type="submit">
            </form>
            

        </div>
    </div>
</div>
    
</HTML>