<HTML>
<BODY>  
<link rel="stylesheet" type="text/css" href="style.css" media="screen" />

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

$sql = "SELECT first_name, ID, sID, CourseName, CourseID, cName FROM Survey, studentCourses, Course WHERE ID = sID AND CourseName = CourseID";
$result = mysql_query($sql);
print mysql_error();
echo "<table border = '1'> <tr> <th>First Name</th> <th>Course Name</th></tr>";

while ($row = mysql_fetch_array($result)) {
echo"<tr>";
    echo "<td>" .$row['first_name'].' '." </td>";
    echo "<td>" .$row['cName'].' '." </td>";
    echo "</tr>\n";
}

mysql_close($mysql_handle);

?>
        </div>
    </div>
</div>
</BODY>
</HTML>