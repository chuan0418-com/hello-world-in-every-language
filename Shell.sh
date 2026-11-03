#!/bin/sh
helloWorld() {
    if [ "$1" = "print" ]; then
        echo "Hello, World!"
    fi
}

helloWorld "print"