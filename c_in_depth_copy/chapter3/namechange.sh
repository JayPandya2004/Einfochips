for file in 3_*
do
    if [ -f "$file" ]
    then
        rename 's/^3_//' "$file"
    fi
done
