<?php session_start(); ?>
<head>
<meta http-equiv="content-type" content="text/html;charset=utf-8" />
<link rel="stylesheet" type="text/css" href="style.css" media="screen" />
</head>

<!--HOME PAGE-->
<body>
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
            <?php
                $dbhost = 'oniddb.cws.oregonstate.edu';
                $dbname = 'stinek-db';
                $dbuser = 'stinek-db';
                $dbpass = 'CLmPCQKB5rV0GSgi';

                $mysql_handle = mysql_connect($dbhost, $dbuser, $dbpass)
                    or die("Error connecting to database server");

                mysql_select_db($dbname, $mysql_handle)
                    or die("Error selecting database: $dbname");
                $studentID = ($_POST['ID']);

                //echo "Debug: $-sesson[first_name] = $_SESSION[first_name]";
            ?>
            
            <form action="update_confirmation.php" method="post">
            
            If you would like to update your student information, fill in the following. 
            If not click <a href="http://people.oregonstate.edu/~stinek/returnStudentInfo.php">here</a> to return to the previous page. 
            <br>
            <br>
            
            Please update your First Name: <input name="first_name" size="7"><br>
            Please update your Last Name: <input name="last_name" size="7"><br>
            Please update your email address: <input name="email" size="7"><br>
            
                
            <br>
            <input type="submit">
            </form>  
        </div>
        </div>
    </div>
</body>
