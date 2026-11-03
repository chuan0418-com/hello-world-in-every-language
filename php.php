<?php
function helloWorld($action){
    if ($action === "print"){
        echo "Hello, World!\n";
    }
}

helloWorld("print");
?>