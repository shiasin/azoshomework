all:
	mkdir output/q1;
	gcc q1/getpid.c -o output/q1/result;
	cp q1/getpid.txt output/q1/getpid.txt;
	cp q2/execv.txt output/q2;
	gcc q3/execv.txt -o output/q3;
	gcc q4/execvcon.c -o output/q4;
	cp q5/question5.txt output/q5;

q1:
	mkdir output/q1;
	gcc q1/getpid.c -o output/q1/result;
	cp q1/getpid.txt output/q1/getpid.txt;

q2:
	cp q2/execv.txt output/q2;
	cat output/q2;
q3:
	gcc q3/execv.c -o output/q3;
q4:
	gcc q4/execvcon.c -o output/q4;
q5:
	cp q5/question5.txt output/q5;
	cat output/q5;
clean:
	rm output/q1/result;
	rm output/q1/getpid.txt;	
	rm -rf output/q1;
	rm output/q2;
	rm output/q3;
	rm output/q4;
	rm output/q5;

