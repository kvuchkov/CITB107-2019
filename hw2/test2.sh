#!/bin/bash
[ -f 2.cpp ] && echo "  *** COMPILE ***" && g++ 2.cpp -o 2 && echo "  ***   RUN   ***" && ./2 < 2.in.txt > 2.out.actual.txt && echo "  *** COMPARE ***" && diff 2.out.actual.txt 2.out.txt
pass=$?
echo "  *** RESULT  ***" 
echo "  ***************" 
if [ "$pass" -eq 0 ] 
then
    echo "    *  PASS   *"
else
     echo "     * FAIL *"
fi
