#这个脚本文件用于自动运行代码并将结果重定向到result.txt中
cd ./Calculater/ #基于UNIX的地址Windows需要修改
g++ Calculater.cpp
./a.out >> result.txt
mv result.txt key.txt

for ((i=0; i<20; i++))
do
	cd ~
	cd ./mutation/$i/
	g++ Calculater.cpp
    ./a.out >> result.txt
	mv result.txt $i.txt
done
