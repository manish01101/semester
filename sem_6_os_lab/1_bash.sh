#!/bin/bash  # shebang - tells the system that the file should be executed using the bash shell
# echo "hello, manish!"

# variable in bash
# name="manish"
# echo "hi, name is $name"

# conditional
# age=20
# if [[ $age -ge 18 ]]; then
#   echo "you are an adult"
# else
#   echo "you are a minor"
# fi

# for loop
# for ((i = 0; i < 5; i++)); do
#   echo "$i"
# done

# for i in {1..6}
# do 
#   echo "number $i"
# done

# while loop
# counter=1
# while [$counter -le 5]
# do 
#   echo "count: $counter"
#   ((counter++))
# done

#function
# greet() {
#   echo "hello, $1, i am $2" #$1 -> positional parameter, it represents the first arg passed to the function
# }
# greet "man" "manish"

# USER INPUT
# echo "enter your name: "
# read name
# echo "hello, $name!"

# UNTIL LOOP
# i=1
# until [$i -lt 5]
# do
#   echo "$i"
#   ((i++))
# done

# ERROR HANDLING
echo "this is a test"
# false # this cmd will fail (exit status 1)
if[[$? -ne 0]]; then
echo "the prev cmd failed"
fi