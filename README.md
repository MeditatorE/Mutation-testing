# Mutation-testing
This project for CS250  testing project
## Intriduction
This project is the final project of CS250. Its function is to perform mutation detection. We generated 40 mutants on a scientific calculator project [**Calculator-master**](https://github.com/nefuddos/Calculater) on GitHub by using [**Milu**](https://github.com/yuejia/Milu), and then randomly selected 20 of them for mutation testing.
## File composition
### Calculater-master
Original project

### Calculator
The project after our modification is used to automatically read the test case

### mutation
mutant

### find_diff.cpp
Used to automatically detect output

### matrix.txt
Used to save mutation matrix

### test.sh
The running interface of this project

### test.txt
Test Cases

## Mutant example
### Original
       long double ARCTAN(int number,long double count[],int len) 
       {
              if(function_array[number].std_number==len)
              {
                     return atan(count[0]); return SINT;
              } 
       }
### Mutant
       long double ARCTAN(int number,long double count[],int len) 
       {
              if(function_array[number].std_number!=len)//if(function_array[number].std_nu mber==len)
              {
                     return atan(count[0]); return SINT;
              } 
       }
## Result
Please see the file [**Matrix.txt**](https://github.com/MeditatorE/Mutation-testing/blob/main/matrix.txt)

       0          cos(30)
       1          sin(60)               ln(403.43)
       2          cos(30)
       3          tan(45)               sinh(0.5)                   log10(1000000000)
       4          tan(45)               sinh(0.5)
       5          arcsin(0.5)
       6          arccos(0.707)
       7          arccos(0.707)         avg(27,36,61,21,93,77)      var(27,36,61,21,93,77)     varp(27,36,61,21,93,77)      stdev(27,36,61,21,93,77)     stdevp(27,36,61,21,93,77)
       8          arccos(0.707)         arctan(1)                   fact(7)
       9          arctan(1)
       10         cosh(0.3)             exp(4)
       11         ln(403.43)            yroot(125,5)
       12         sqrt(3136)
       13         pow(7,4)              mod(76,13)
       14         yroot(125,5)          avg(27,36,61,21,93,77)      var(27,36,61,21,93,77)     varp(27,36,61,21,93,77)      stdev(27,36,61,21,93,77)     stdevp(27,36,61,21,93,77)
       15         yroot(125,5)
       16         sum(27,36,61,21,93,77)
       17         sum(27,36,61,21,93,77)
       18         var(27,36,61,21,93,77)
       19         stdevp(27,36,61,21,93,77)
The first column is the serial number of the mutant, and the following is the test case
## How to start
Clone this repo
       git clone https://github.com/jiechen2358/FaceAging-by-cycleGAN.git
       cd FaceAging-by-cycleGAN
You need to modify the path in h in the file test.sh and the mutant file calculater.cpp, and then
       sh test.sh
