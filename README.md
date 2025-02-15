# Push Swap

A sorting algorithm project designed to sort a stack of integers using a limited set of operations. The goal is to sort the stack with the fewest possible moves.

## Features

- Implements various sorting algorithms for different stack sizes.
- Provides operations like swap, push, rotate, and reverse rotate.
- Handles error checking for input validation.
- Efficiently sorts stacks of varying sizes.

## Setup

1. **Clone the Repository:**
   ```bash
   git clone https://github.com/jguigli/push_swap.git
   cd push_swap
   ```

2. **Compile the Program:**
   ```bash
   make
   ```

3. **Clean Up:**
   - Remove object files:
     ```bash
     make clean
     ```
   - Remove all generated files:
     ```bash
     make fclean
     ```

## Usage

- **Run the Program:**
  ```bash
  ./push_swap [list of integers]
  ```

- **Example:**
  ```bash
  ./push_swap 3 2 5 1 4
  ```

- **Recompile after changes:**
  ```bash
  make re
  ```

## Operations

- **Swap Operations:**
  - `sa`: Swap the first two elements of stack A.
  - `sb`: Swap the first two elements of stack B.
  - `ss`: Swap the first two elements of both stacks.

- **Push Operations:**
  - `pa`: Push the top element from stack B to stack A.
  - `pb`: Push the top element from stack A to stack B.

- **Rotate Operations:**
  - `ra`: Rotate stack A upwards.
  - `rb`: Rotate stack B upwards.
  - `rr`: Rotate both stacks upwards.

- **Reverse Rotate Operations:**
  - `rra`: Rotate stack A downwards.
  - `rrb`: Rotate stack B downwards.
  - `rrr`: Rotate both stacks downwards.

## Error Handling

- The program checks for:
  - Non-numeric input.
  - Duplicate numbers.
  - Integer overflow.
