#!/bin/sh

cd build
sed -i.bak "s/--parents//g" Makefile
make dist
mv *.gz ../