# Exercise 1: Smallest Number in Array
### Description
Write a program that finds the smallest element in a one-dimensional array containing 20 random integer values in the range 0 to N, where N is a value entered at runtime by the user.
<br/><br/>
### Pseudocode
- Prompt user for value of N, save as `userNum`.
- Seed random number generator.
- Fill each element of array with random number between 0 and `userNum`.
- Assign first value in array to `min`.
- Loop through array and find smallest number, save as `min`.
- Output value of `min`.
<br/><br/>
### Flowchart
```mermaid

flowchart LR

STA([Start]) --> IN[/Input<br>userNum/]
IN --> PRO1[Seed RNG]
PRO1 --> LOO1((Loop 1))
LOO1 --> PRO2["min = arr[0]"]
PRO2 --> LOO2((Loop 2))
LOO2 --> OUT[/Output<br>min/]
OUT --> STO([Stop])

```
```mermaid

graph TD

LOO1((Loop 1)) --> PRO1[i = 0]
PRO1 --> IF1{i < 20} -->|false| RET1((Return))
IF1 --> |true| PRO2["arr[i] = rand() % (userNum + 1)"]
PRO2 --> PRO3[Increment i] -.-> IF1

LO2((Loop 2)) --> PR3[i = 0]
PR3 --> I2{i < 20} -->|false| RE2((Return))
I2 -->|true| I3{"arr[i] < min"}
I3 -->|true| PR4["min = arr[i]"]
PR4 --> PR5[Increment i] -.-> I2

```
<br/><br/>
### Output
```
C:\****\Week-3\Exercise 1>a

Enter a number: 69420

Smallest: 448

C:\****\Week-3\Exercise 1>a

Enter a number: 69420

Smallest: 242

C:\****\Week-3\Exercise 1>a

Enter a number: 42  

Smallest: 0

C:\****\Week-3\Exercise 1>a

Enter a number: 42

Smallest: 4
```
