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
                
                $_SESSION['ID'];
                $course = ($_GET['course']);
                $id = ($_POST['ID']);

                //echo "DEBUG: $ course = $course";
                
                //echo "\nDEUBG: $ id = $_SESSION[ID]";
                

                $survey_id = mysql_query("SElECT ID FROM Survey WHERE ID = '$_SESSION[ID]'");
                //echo "DEUBG: $ survey_id = $survey_id";                        
                echo "You have been enrolled in </br>";
                for ($i = 0; $i < count($course); $i++) {
                    echo  " " . $course[$i] . "</br>";
                    $query = mysql_query("INSERT INTO studentCourses (sID, CourseName) VALUES ('$_SESSION[ID]'," .$course[$i].")"); 
                }
                

                
                //$query = mysql_query("UPDATE studentCourses SET CourseName = '$course', sID = '$_SESSION[ID]'");

            ?>
    </div>
        </div>
    </div>
</body>