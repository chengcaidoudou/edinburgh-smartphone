echo "making backup"
mkdir ../optimized/resource/backup
cp ../optimized/resource/* ../optimized/resource/backup/.

for f in ../optimized/resource/*.js
do
	echo "processing $f"
	java -jar yuicompressor-2.4.7.jar -o $f $f
done

for f in ../optimized/resource/*.css
do
	echo "processing $f"
	java -jar yuicompressor-2.4.7.jar -o $f $f
done
