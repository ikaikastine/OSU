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
                mysql_close($mysql_handle);
            ?>

            <form action="updateConfirm.php" method="post">
    
                Please enter a 6 digit Item ID: <input name="itemID" size="7"><br>
                Please enter the name of the item: <input name="Name" size="7"><br>
                Please enter the price of the item: <input name="Price" size="7"><br>
                Please choose the item type: 
                    <select> 
                        <option value="Catagory">Drivers</option>
                        <option value="Catagory">Irons</option>
                        <option value="Catagory">Putters</option>
                        <option value="Catagory">Bags</option>
                        <option vlaue="Catagory">Golf Balls</option>
                    </select>
                </br>
                <input type="submit">
            </form> 
            </div>
        </div>
    </div>
</BODY>
</HTML>