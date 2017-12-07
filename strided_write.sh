if [ "$1" = "help" ]
then
echo "Usage"
echo "================================================"
echo "strided_read.sh "stride_size" "stride_rep" "file_name""
echo "================================================"
fi

if [ "$1" = "" ]
then
echo "Usage"
echo "================================================"
echo "strided_read.sh "stride_size" "stride_rep" "file_name""
echo "================================================"
fi




if [ "$2" = "" ]
then
echo "Usage"
echo "================================================"
echo "strided_read.sh "stride_size" "stride_rep" "file_name""
echo "================================================"
fi


if [ "$3" = "" ]
then
echo "Usage"
echo "================================================"
echo "strided_read.sh "stride_size" "stride_rep" "file_name""
echo "================================================"
fi

dd if=/dev/urandom of="$3" bs=$1 count=$2
