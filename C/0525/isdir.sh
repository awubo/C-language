#!/bin/sh
echo "input file name:"
read NAME
if [ -d $NAME ] ; then
        echo $NAME " is DIR"
else
        echo $NAME " is NOT DIR"
fi
