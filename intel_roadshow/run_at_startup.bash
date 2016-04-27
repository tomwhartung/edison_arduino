#!/bin/bash
#
current_date=$(date)
file_ext=$(date +'%H-%M-%S')
file_name="~/date_logs/boot.$file_ext"
echo "Running at startup!  date is $current_date" >> $file_name

ping -c1 google.com
ret_val=$?

if [ $ret_val -eq 0 ]; then
	echo 'Able to ping google ok' >> $file_name
else
	echo 'Unable to ping google ok' >> $file_name
fi

ping -c1 nonexistentgoogle.com
ret_val=$?

if [ $ret_val -eq 0 ]; then
	echo 'Able to ping nonexistentgoogle ok' >> $file_name
else
	echo 'Unable to ping nonexistentgoogle ok' >> $file_name
fi

