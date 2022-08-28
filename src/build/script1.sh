#!/bin/sh

OS=$(uname)

cd build
$1 ../core/*.pro
make
if [ ${OS} = Linux ]; then
    cp viewer ../
elif [ ${OS} = Darwin ]; then
    cp -r viewer* ../
else
    echo "\nWindows install is not supported"
fi