#!/bin/bash

# Q1: take i/p to calculate sum of two number
# echo "enter first number:"
# read first
# echo "enter second number:"
# read second
# sum=$((first+second))
# echo "sum is $sum"

# Q2: script to count down from a given number to 1
# echo "enter num:"
# read num
# while [$num -ge 1]
# do
#   echo "num $num"
#   ((num--))
# done

# Q3: sript that checks if a direcory exist
# echo "enter dir path"
# read dir
# if [-d "$dir"]; then
#   echo "exist"
# else 
#   echo "not exist"
# fi

# Q4: script to create a backup of a file
# echo "enter filename:"
# read filename
# if [-f "$filename"]; then
#   cp "$filename" "$filename.bak"
#   echo "backup of $filename created as $filename.bak"
# else
#   echo "file does not exist"
# fi

# Q5: script takes multiple args and prints them one by one
# echo "you entered the following args:"
# for name in "$@"
# do
#   echo "$name"
# done