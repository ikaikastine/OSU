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

            $ID = ($_POST['ID']);
            $first_name = ($_POST['first_name']);
            $last_name = ($_POST['last_name']);
            $email = ($_POST['email']);
            $age = ($_POST['age']);
            $gender = ($_POST['gender']);
            $major = ($_POST['major']);
            $courses = ($_POST['courses']);
            $_SESSION['ID'] = $ID;
            $_SESSION['first_name'] = $first_name;
            $_SESSION['last_name'] = $last_name;
            ?>
            

            Thank you <?php echo $_POST["first_name"]; ?> for completing the form. <br>

            <?php
            $query = "INSERT INTO Survey (ID, first_name, last_name, email, age, gender, major, courses) VALUES ('$ID','$first_name','$last_name', '$email', '$age', '$gender', '$major', '$courses')";

            if (!mysql_query($query, $mysql_handle)) {
                die ('Error:' . mysql_error($mysql_handle));
            }

            /*$result = mysql_query($query, $mysql_handle) 
                or die("Error in querying database");
            */
            echo "Your information has been successfully added to the database";
            mysql_close($mysql_handle);
            ?>
            
            <p><br>Please choose from one of the following options. </p>
            <p><a href="http://people.oregonstate.edu/~stinek/enrollment.php">Enroll in a class</a></p>
            <p><a href="http://people.oregonstate.edu/~stinek/">View your current class</a></p>
    </div>
        </div>
    </div>
</body>