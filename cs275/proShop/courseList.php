<HTML>
<BODY>  
<link rel="stylesheet" type="text/css" href="style.css" media="screen" />

<div id="wrap">
        <div id="top">
            <h2> <a href="http://people.oregonstate.edu/~stinek/proShop/index.html">Pro Shop Management</a></h2>
        <div id="menu">
          <ul>
            <li><a href="http://people.oregonstate.edu/~stinek/OSU/cs275/proShop/courseList.php">List Courses</a></li>
            <li><a href="http://people.oregonstate.edu/~stinek/OSU/cs275/proShop/memberLogin.php">Member Sign-In</a></li>
            <li><a href="http://people.oregonstate.edu/~stinek/OSU/cs275/proShop/employeeLogin.php">Employee Sign-In</a></li> 
            <li><a href="http://people.oregonstate.edu/~stinek/OSU/cs275/proShop/signUp.php">Sign Up</a></li>
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

    $sql    = "SELECT Name, Description, Par, Type FROM proShop";
    $result = mysql_query($sql);
    print mysql_error();
    echo "<table align = 'center' border = '1'> <tr> <th>Course Name</th> <th>Holes</th> <th>Par</th> <th>Description</th> </tr>";

    while ($row = mysql_fetch_array($result)) {
    echo"<tr>";
        echo "<td>" .$row['Name'].' '." </td>";
        echo "<td>" .$row['Type'].' '." </td>";
        echo "<td>" .$row['Par'].' '." </td>";
        echo "<td>" .$row['Description'].' '." </td>";
        echo "</tr>\n";
    }
    mysql_close($mysql_handle);
?>

</div>
</div>
</div>
</BODY>
</HTML>
