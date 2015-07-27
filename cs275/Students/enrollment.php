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
            <li><a href="http://people.oregonstate.edu/~stinek/list.php">Student Information</a></li>    
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
            ?>
        <form action="enroll_confirm.php" method="get">
            Please select the courses you would like to enroll in.<br>
            The following courses are 4 credits: <br>
            <input type="checkbox" name="course[]" value="161">CS 161<br>
            <input type="checkbox" name="course[]" value="162">CS 162<br>
            <input type="checkbox" name="course[]" value="261">CS 261<br>
            <input type="checkbox" name="course[]" value="275">CS 275<br>
            <input type="checkbox" name="course[]" value="251">MTH 251<br>
            <input type="checkbox" name="course[]" value="252">MTH 252<br>
            <input type="checkbox" name="course[]" value="231">MTH 231<br>
            <input type="checkbox" name="course[]" value="162">CS 162<br>
            The following courses are 3 credits: <br>
            <input type="checkbox" name="course[]" value="ENG101">ENG 101<br>
            <input type="checkbox" name="course[]" value="H101">HST 101<br>
            <input type="checkbox" name="course[]" value="P101">PE 101<br>
            <input type="checkbox" name="course[]" value="B201">BUS 101<br>
        <br>
        <input type="submit">
    </div>
        </div>
    </div>
</body>
    
