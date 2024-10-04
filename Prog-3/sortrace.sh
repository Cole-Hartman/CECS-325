# This file is called sortrace.sh
# It must have execute privilege set to run
# run it as a background task like this: (see the 2 lines below)
#----------------------------------------------------------------------------------------------
#	$ rm sortrace.log	# start with fresh log file
#	$ sortrace.sh >> sortrace.log &      # this may take an hour
#----------------------------------------------------------------------------------------------
#
echo Generating 1000000 random numbers
sleep 1
# ./generate 1000000 -100000 100000
./generate 50 -200 500
sleep 1
echo Starting system sort
sleep 1
{ time sort -n numbers.dat > systemsort.out; } 2>&1>> sortrace.log
sleep 1
echo Starting mysort
echo Array bubble sort with 1000000 items
echo Ending bubble sort
sleep 1
{ time ./mysort numbers.dat mysort.out; } 2>&1>> sortrace.log
sleep 1
wc mysort.out
sort -c -n mysort.out 2>> sortrace.log # verify file is sorted 

