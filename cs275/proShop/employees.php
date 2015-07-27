<?php session_start(); ?>
<HTML>
<BODY>  
<link rel="stylesheet" type="text/css" href="style.css" media="screen" />

<div id="wrap">
        <div id = "top">
            <h2> <a href="http://people.oregonstate.edu/~stinek/proShop/index.html">Pro Shop Management</a></h2>
            <div id = "menu">
              <ul>
                <li><a href="http://people.oregonstate.edu/~stinek/proShop/courseList.php">List Courses</a></li> 
                <li><a href="http://people.oregonstate.edu/~stinek/proShop/memberLogin.php">Member Sign-In</a></li>
                <li><a href="http://people.oregonstate.edu/~stinek/proShop/employeeLogin.php">Employee Sign-In</a></li> 
                <li><a href="http://people.oregonstate.edu/~stinek/proShop/signUp.php">Sign Up</a></li>
              </ul>
            </div>
      </div>
        <div id = "content">
            <div id = "middle">

            <?php
                $dbhost = 'oniddb.cws.oregonstate.edu';
                $dbname = 'stinek-db';
                $dbuser = 'stinek-db';
                $dbpass = 'CLmPCQKB5rV0GSgi';

                $mysql_handle = mysql_connect($dbhost, $dbuser, $dbpass)
                    or die("Error connecting to database server");

                mysql_select_db($dbname, $mysql_handle)
                    or die("Error selecting database: $dbname");

                $ID = ($_POST['eID']);
                $_SESSION['eID'] = $mID;

                $name        = ("SELECT firstName, lastName FROM Employees WHERE eID = '$ID'");
                $result      = mysql_query($name);
                $name_result = mysql_fetch_array($result);
                print mysql_error();

                //select the days of the week from the employee database to display the schedule
                $schedule        = ("SELECT Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday FROM Employees WHERE eID = '$ID'");
                $result_schedule = mysql_query($schedule);

                mysql_close($mysql_handle);
            ?>

            Welcome Back <?php  echo $name_result['firstName'], " ", $name_result['lastName']; ?>

            <p>If you would like to add items to the pro shop inventory, click <a href="http://people.oregonstate.edu/~stinek/proShop/updateInventory.php">here</a></p> 
            <br>
            <br>
            Here is your schedule for the week: 
            <br>
            <?php
                echo "<br />";
                echo "<table align = 'left' border = '1'> <tr> 
                    <th>Sunday</th> <th>Monday</th> <th>Tuesday</th> <th>Wednesday</th>  <th>Thursday</th> <th>Friday</th> <th>Saturday</th></tr>";

                while ($row = mysql_fetch_array($result_schedule)) {
                    echo"<tr>";
                        echo "<td>" .$row['Sunday'].' '." </td>";
                        echo "<td>" .$row['Monday'].' '." </td>";
                        echo "<td>" .$row['Tuesday'].' '." </td>";
                        echo "<td>" .$row['Wednesday'].' '." </td>";
                        echo "<td>" .$row['Thursday'].' ' ." </td>";
                        echo "<td>" .$row['Friday'].' ' ." </td>";
                        echo "<td>" .$row['Saturday'].' ' ." </td>";
                    echo "</tr>\n";
                }

            ?>

            </div>
        </div>
    </div>
</BODY>
</HTML>