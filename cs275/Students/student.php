<HTML>
<HEAD>
<TITLE>Student Information</TITLE>
<link rel="stylesheet" type="text/css" href="style.css" media="screen" />
</HEAD>
   
    
<?php
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
          <h2>Welcome, New Students!</h2>
          
        
<form action="confirmation.php" method="post">
    
Enter your 9 Digit Student Number: <input name="ID" size="7"><br>
Enter your First Name: <input name="first_name" size="7"><br>
Enter your Last Name: <input name="last_name" size="7"><br>
Enter your email address: <input name="email" size="7"><br>
Please choose your gender 
    <select> 
        <option value="gender">Default</option>
        <option value="gender">Male</option>
        <option value="gender">Female</option>
    </select>
<br>
Please select your major
    <select>
        <option value="major">Default</option>
        <option value="major">CS</option>
        <option value="major">ECE</option>
        <option value="major">Business</option>
    </select>
<br>
<input type="submit">
</form>   

</div>
        
        <div id="clear"></div>
      </div>
      
    </div>
    



</BODY>  
</HTML>