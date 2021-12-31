##这个脚本文件用于自动运行代码并将结构重定向到result.txt中
cd ///Users/einstean/Desktop/Calculater-master/Calculater/
g++ Calculater.cpp
./a.out >> result.txt

for ((i=0; i<20; i++))
do
	cd ~
	cd ///Users/einstean/Desktop/M/$i
	g++ Calculater.cpp
    ./a.out >> result.txt
done
