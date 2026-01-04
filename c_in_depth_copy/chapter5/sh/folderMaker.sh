for file in *
do
	if [ -f $file ]
	then
		extension="${file##*.}"
		mkdir -p $extension
		mv "$file" "$extension"
	fi	
done
