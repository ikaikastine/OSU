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

                $itemID       = ($_POST['itemID']);
                $itemName     = ($_POST['Name']);
                $itemPrice    = ($_POST['Price']);
                $itemCatagory = $_POST['Catagory'];

                $query = "INSERT INTO storeInventory (itemID, Name, Price, Catagory) VALUES ('$itemID', '$itemName', '$itemPrice', '$itemCatagory')";

                if (!mysql_query($query, $mysql_handle)) {
                    die ('Error:' . mysql_error($mysql_handle));
                }

                mysql_close($mysql_handle);
            ?>

            <p>Item #: <?php echo $itemID ?> <br> Item Name: <?php echo $itemName?> <br> Price: <?php echo $itemPrice ?> <br> Successfully added to the database.</p>

            </div>
        </div>
    </div>
</BODY>
</HTML>