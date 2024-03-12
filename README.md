# ALU

An elemental component of a processor is the Arithmetic Logic Unit (ALU), responsible for performing arithmetic and logical operations in a computer. In this practice, an 8-bit adder and subtractor will be designed and simulated in Logisim. Additionally, a function will be implemented in the C programming language to simulate the operation of a 32-bit ALU, capable of performing the following operations:

1. Arithmetic operations of addition and subtraction.
2. Bitwise logical operations of OR and AND.
3. Comparison to check if inputs are equal or if one is less than the other.

This practice is made by professor José Galaviz Casas from Organization and Arquitecture of Computers in the Faculty of Science.


### Prerequisites

To compile the C file:

```
$ gcc practica4.c 
```

To compile the C file and to name the executable file:

```
$ gcc practica4.c -o filename.out
```

To run the executable file:

```
./filename.out -op -opA -opB
```

`op`; represents the operation. You can chose from these options:


| Numbers to enter  | Operation |
| ------------- | ------------- |
| 000  | AND  |
| 001  | OR  |
| 010  | ADITION  |
| 011  | SUBSTRACTION  |
| 100  | EQUAL  |
| 101  | LOWER TAHN  |


## Authors

  - **Billie Thompson** - *Provided README Template* -
    [PurpleBooth](https://github.com/PurpleBooth)
    - **Emma A. Jimenez S.** - *Authors Code* -
    [PurpleBooth](https://github.com/EmmaAli1604)

## License

This project is licensed under the [ GNU GENERAL PUBLIC LICENSE](LICENSE)

