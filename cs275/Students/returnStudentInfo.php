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
                $studentID = ($_POST['ID']);
                $_SESSION['ID'] = $studentID;

                $name = "SELECT ID, first_name, last_name FROM Survey WHERE ID = $studentID";
                $result = mysql_query($name);
                $name_result = mysql_fetch_array($result);
                print mysql_error();
                
                $_SESSION['first_name'] = $name_result['first_name'];
                $_SESSION['last_name'] = $name_result['last_name'];
                if ($name != NULL) {
                ?>
                  Welcome Back <?php  echo $name_result['first_name'], " ", $name_result['last_name'];
                }
                else {
                    echo "Invalid User ID. Please try Again.";
                }
            ?>
        </div>
        
            <p><br>Please choose from one of the following options. </p>
            <p><a href="http://people.oregonstate.edu/~stinek/updateInfo.php">Update your current information</a></p>
            <p><a href="http://people.oregonstate.edu/~stinek/enrollment.php">Enroll in a class</a></p>
            <p><a href="http://people.oregonstate.edu/~stinek/studentList.php">View your current classes</a></p>
                
            <div id="clear"></div>
        </div>
    </div>
</div>
    
</body>
