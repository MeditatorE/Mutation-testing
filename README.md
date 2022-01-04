# Mutation-testing
    This project for CS250  testing project
## Intriduction
    This project is the final project of CS250. Its function is to perform mutation detection. We generated 40 mutants on a scientific calculator project [**Calculator-master**](https://github.com/nefuddos/Calculater) on GitHub by using [**Milu**](https://github.com/yuejia/Milu), and then randomly selected 20 of them for mutation testing.
## File composition
[**Calculator-master**](https://github.com/MeditatorE/Mutation-testing/tree/main/Calculater-master)
Original project

[**Calculator**](https://github.com/MeditatorE/Mutation-testing/blob/main/Calculator)
The project after our modification is used to automatically read the test case

[**mutation**](https://github.com/MeditatorE/Mutation-testing/blob/main/mutation)
mutant

[**find_diff.cpp**](https://github.com/MeditatorE/Mutation-testing/blob/main/find_diff.cpp)
Used to automatically detect output

[**matrix.txt**](https://github.com/MeditatorE/Mutation-testing/blob/main/matrix.txt)
Used to save mutation matrix

[**test.sh**](https://github.com/MeditatorE/Mutation-testing/blob/main/test.sh)
The running interface of this project

[**test.txt**](https://github.com/MeditatorE/Mutation-testing/blob/main/test.txt)
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
1. Clone this repo

       git clone https://github.com/MeditatorE/Mutation-testing
       cd Mutation-testing
       
2. You need to modify the path in the file [**test.txt**](https://github.com/MeditatorE/Mutation-testing/blob/main/test.sh) and the every mutant file [**calculater.cpp**], and then

       sh test.sh
       
## Conclusion
    By analyzing the mutation matrix in Figure 9, we found that the test cases we used in Figure 6 can completely cover all the functional functions in this project, which means that our test cases cover the functional functions in this project. Can reach 100%. But our experiment may have a shortcoming. For other non-functional functions in this project, our test cases may not be able to accurately detect the location of mutations. Even if the mutation of non-functional functions does not affect the normal operation of this project, our test cases may not recognize this mutant. Fortunately, such mutations have almost no effect on the results of this project, so we can draw a conclusion that our test cases can perfectly kill all mutants that may have a negative impact on the project.

