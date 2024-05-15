#!/bin/bash
echo “Enter the first number:”
read num1
echo “Enter the second number:”
read num2
result=$(( $num1/$num2 ))
echo “The result of dividing $num1 by $num2 is:$result”
