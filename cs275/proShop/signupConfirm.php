<HTML>
<BODY>  
<link rel="stylesheet" type="text/css" href="style.css" media="screen" />
<div id="wrap">
        <div id="top">
            <h2> <a href="http://people.oregonstate.edu/~stinek/proShop/index.html">Pro Shop Management</a></h2>
        <div id="menu">
          <ul>
            <li><a href="http://people.oregonstate.edu/~stinek/proShop/courseList.php">List Courses</a></li> 
            <li><a href="http://people.oregonstate.edu/~stinek/proShop/memberLogin.php">Member Sign-In</a></li>
            <li><a href="http://people.oregonstate.edu/~stinek/proShop/employeeLogin.php">Employee Sign-In</a></li> 
            <li><a href="http://people.oregonstate.edu/~stinek/proShop/signUp.php">Sign Up</a></li>
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

                $mID = ($_POST['mID']);
                $firstName = ($_POST['firstName']);
                $lastName = ($_POST['lastName']);

                $query = "INSERT INTO Customers (mID, firstName, lastName) VALUES ('$mID','$firstName','$lastName')";

                if (!mysql_query($query, $mysql_handle)) {
                    die ('Error:' . mysql_error($mysql_handle));
                }
                
                mysql_close($mysql_handle);
            ?>   

            Thank you <?php echo $_POST["firstName"], " ", $_POST["lastName"]?> for completing the form. <br>
            Please sign in via the member tab above. 
            
            </div>
        </div>
    </div>
</BODY>
</HTML>