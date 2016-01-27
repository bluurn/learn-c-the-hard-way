#!/bin/sh

for D in `find ex* -type d` 
do
  cd $D 
  make clean
  cd -
done
