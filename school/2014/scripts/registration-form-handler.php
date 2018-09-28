<?php 
$errors = '';
$myemail = 'costas.andreopoulos@stfc.ac.uk';//<-----Put Your email address here.
if(empty($_POST['name'])  || 
   empty($_POST['email']) || 
   empty($_POST['affiliation']) || 
   empty($_POST['position']) || 
   empty($_POST['project']) || 
   empty($_POST['supervisor']))
{
    $errors .= "\n Error: all fields are required";
}

$name          = $_POST['name']; 
$email_address = $_POST['email']; 
$affiliation   = $_POST['affiliation']; 
$position      = $_POST['position']; 
$project       = $_POST['project']; 
$supervisor    = $_POST['supervisor']; 

if (!preg_match(
"/^[_a-z0-9-]+(\.[_a-z0-9-]+)*@[a-z0-9-]+(\.[a-z0-9-]+)*(\.[a-z]{2,3})$/i", 
$email_address))
{
    $errors .= "\n Error: Invalid email address";
}

if( empty($errors))
{
/*
	$to = $myemail; 
	$email_subject = "NuSTEC generator school registration: $name";
	$email_body = "You have received a new application for the NuSTEC generator school.\n".
	" Here are the details:\n Name: $name \n Email: $email_address \n Affiliation: $affiliation \n Position: $position \n Project: $project \n Supervisor: $supervisor"; 
	
	$headers = "From: $myemail\n"; 
	$headers .= "Reply-To: $email_address";
	mail($to,$email_subject,$email_body,$headers);

	$to = $email_address; 
	$email_subject = "NuSTEC generator school registration";
	$email_body = "Dear $name.\n Thank you for your interest on the NuSTEC generator school.\n\n The organizing committee \n";
	mail($to,$email_subject,$email_body,$headers);

	//redirect to the 'thank you' page
	header('Location: http://genie.hepforge.org/school/2014/scripts/thank_you.html');
*/
	header('Location: http://genie.hepforge.org/school/2014/scripts/closed.html');
} 
?>
<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd"> 
<html>
<head>
	<title>Contact form handler</title>
</head>

<body>
<!-- This page is displayed only if there is some error -->
<?php
echo nl2br($errors);
?>


</body>
</html>
