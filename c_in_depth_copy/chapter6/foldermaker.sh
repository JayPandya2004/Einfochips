for file in *
do
	if [ -f $file ]
	then
		extension="${file##*.}"
		mkdir -p $extension
		cp "$file" "$extension"
	fi	
done
