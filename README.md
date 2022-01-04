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
       long double ARCTAN(int number,long double count[],int len) {
if(function_array[number].std_number==len) {
return atan(count[0]); return SINT;
} }
   
