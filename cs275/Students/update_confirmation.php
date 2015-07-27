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

                //echo 'Successfully connected to database!';
                function test($data) {
                    $data = trim($data);
                    $data = stripslashes($data);
                    $data = htmlspecialchars($data);
                    return $data;
                } 

                $first_name = test($_POST['first_name']);
                $last_name = test($_POST['last_name']);
                $email = test($_POST['email']);
                $ID = test($POST['ID']);
                $_SESSION['ID'];
                $_SESSION['first_name'];
                $_SESSION['last_name'];

                
                
            /*  
                echo "Debug: $-sesson[first_name] = $_SESSION[first_name]";
                echo "Debug: $-sesson[ID] = $_SESSION[ID]";
                echo "DEBUG: $ first_name = $first_name";
            */
                $query = mysql_query("UPDATE Survey SET first_name = '$first_name', last_name = '$last_name', email = '$email' WHERE ID = '$_SESSION[ID]'");
                
            ?>    
            Thank you <?php  echo $first_name, " ", $last_name; ?>. Your information has been updated.
                        
            
    </div>
        </div>
    </div>
</body>