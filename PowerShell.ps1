function helloWorld($action){
    if ($action -eq "print"){
        Write-Output "Hello, World!"
    }
}

helloWorld("print")
