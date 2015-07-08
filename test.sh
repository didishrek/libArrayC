#!/bin/bash

function myerror
{
  if [ $? -ne 0 ] ; then
    echo "$? FAIL"
    exit 1
  else
    echo "DONE"
  fi
}

echo "========== Clean all =========="
make fclean
rm -v a.out

echo "========== Compilation lib =========="
make -j
myerror

echo "========== Compilation test =========="
gcc maintest.c -L./ -larray -Iincludes -std=gnu99
myerror

echo "========== Export =========="
export LD_LIBRARY_PATH=`pwd`
myerror

echo "========== Test =========="
./a.out

exit 0
