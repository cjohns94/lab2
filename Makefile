all:
	g++ -std=c++11 -o OUTPUT main.cpp ExpressionManager.cpp

clean:
	rm -f OUTPUT out_file1.txt out_file2.txt out_file3.txt out_file4.txt out_file5.txt