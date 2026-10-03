# CIS 165 - Lab 4: Averages and Ocean-Level Projections

## How to Compile and Run
To compile and run these programs from the terminal, use the following commands:

**Average Program:**
`g++ -std=c++17 -Wall -Wextra average.cpp -o average` 
`./average`

**Ocean Levels Program:**
`g++ -std=c++17 -Wall -Wextra ocean_levels.cpp -o ocean_levels`
`./ocean_levels`

* Note: I use a Mac, and so my terminal compiles slightly differently than a Windows machine. More specifically, I use `clang++` instead of `g++`*

## Program Plans
**average.cpp Plan:** 
1. Declare five double variables and assign them the values 28, 32, 37, 24, and 33. 
2. Declare a double variable for the sum and one for the average. 
3. Add the five variables together and store them in `sum`. 
4. Divide the `sum` by 5.0 and store the result in `average`. 
5. Output both variables to the console with labels.

**ocean_levels.cpp Plan:**
1. Declare a constant double `ANNUAL_RATE` and set it to 1.5. 
2. Declare three integer variables representing the years (5, 7, and 10). 
3. Declare three double variables to hold the result of each calculation. 
4. Multiply the constant by each year variable and store them in the result variables. 
5. Output all three variables to the console with labels.

## Test Tables

| Program and test           | Values used                  | Expected results               | Actual results                  | Match/Correction|
| Average — assigned values  | 28, 32, 37, 24, 33           | Sum: 154, Avg: 30.8            | Sum: 154, Avg: 30.8             | Match |
| Average — changed values   | 28.5, 32.1, 37.0, 24.2, 33.3 | Sum: 155.1, Avg: 31.02         | Sum: 155.1, Avg: 31.02          | Match |
| Ocean — assigned rate      | 1.5                          | 5yr: 7.5, 7yr: 10.5, 10yr: 15  | 5yr: 7.5, 7yr: 10.5, 10yr: 15   | Match |
| Ocean — changed rate       | 2.5                          | 5yr: 12.5, 7yr: 17.5, 10yr: 25 | 5yr: 12.5, 7yr: 17.5, 10yr: 25  | Match |

* Note: I have restored the original values to both programs and re-ran them to confirm they still output the assigned data.*
  
## Code Explanations

**Why should the five values and the average use the double data type?**
Using the `double` data type allows the program to store and output decimal values accurately. If integers were used, dividing the sum by 5 would result in integer division, eliminating the decimal (for example, it would output 30 instead of 30.8).

**Trace the assigned values through sum and average.**
The assigned values (28.0, 32.0, 37.0, 24.0, 33.0) are added together to equal 154.0. This value of 154.0 is stored in the `sum` variable. In the next line, the program retrieves the 154.0 from `sum`, divides it by 5.0 to get 30.8, and stores 30.8 into the `average` variable.

**Why should the average calculation divide the completed sum rather than only the final value?**
If we didn't use the completed sum and instead typed `val1 + val2 + val3 + val4 + val5 / 5.0`, the standard order of operations would execute the division first. It would only divide `val5` by 5, and then add the other four intact values to it. The produced output would be mathematically incorrect.

**Explain how the ocean-level calculations use the annual rate and number of years.**
The calculations take the `ANNUAL_RATE` constant (1.5) and multiply it by each individual year variable (5, 7, and 10) to find the total displacement over that specific span of time.

**Why is the annual ocean-level rate a good candidate for a named constant?**
It is a good candidate for a named constant because the rate of 1.5 does not change at any point during the program's execution. Using a named constant prevents changes in the code that are unaccounted for, making the formulas easier to read and easier to update later if the scientific rate changes.

**Why does the assignment require calculations to be stored before using cout?**
Storing calculations in variables makes the code cleaner and easier to debug. It separates the "processing" logic from the "output" logic. Furthermore, if we need to use the `sum` or `average` again later in the program, we can just call the variable instead of forcing the program to recalculate again.
