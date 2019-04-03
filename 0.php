<?php
for($i=1;$i<=100;$i++){
	if(!(bool)($i%15)){
		echo "Fizz Buzz\r\n";
	}else{
		if(!(bool)($i%3)){
			echo "Fizz\r\n";
		}else{
			if(!(bool)($i%5)){
				echo "Buzz\r\n";
			}else{
				echo $i."\r\n";
			}
		}
	}
}
?>
