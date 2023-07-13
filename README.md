# Introduction

Welcome to our repository! This project presents a monotonicity-based method (M*-extension) for sharpening the computation of function enclosures over variable domains. The method is designed to optimize even non-monotonic functions and has been implemented as an existence test (M*-test) within the well-established IbexSolve constraint solver. In this repository, we provide all the necessary code and instructions for you to understand, install, and use the existence test feature in your own work.

## Compiling and Installing

Before you begin, please ensure you have `cmake` installed on your system. If not, you can install it by running `sudo apt-get install cmake`.

Once you have `cmake` installed, you can compile the project with the following commands:

```
cmake .
make ibexsolve
```

These commands build the executable `ibexsolve` in the `bin/` directory.

## (3) Example of Use

Here is an example of how to run the `ibexsolve` executable with the `M-test` existence test:

```
bin/ibexsolve benchs/solver/deriv_systems/Brent-8.bch \
benchs/solver/deriv_systems/Brent-8.bch.der -t 15000 --test_type="M-test"
```

This command loads a problem system from the specified files and applies the M-test existence test with a timeout of 15000 seconds. The output of this command will give you the results of solving the instance considering the `M-test` as the existence test for discarding boxes.

## (4) Options for --test_type

The `--test_type` option allows you to specify the type of existence test to apply. We currently support four types of existence tests:

- "no-test": Does not apply any existence test.
- "M-test": Applies the traditional monotonicity-based and Taylor-based existence tests.
- "M*_test": Applies the new M*-extension that also encompasses traditional monotonicity-based and Taylor-based existence tests.
- "Lazy-M*-test": Applies the cost-effective Lazy M*-test, which also includes the traditional monotonicity-based and Taylor-based existence tests.

For example, to use the M*-test, you would run the following command:

```
bin/ibexsolve <system_file> <partialderivatives_file> -t 15000 --test_type="M*_test"

```

To see all available options of the solver, run:

```
bin/ibexsolve --help
```

## Implementation of the Existence Test

The monotonicity-based tests are implemented in the following files:

- src/contractor/ibex_CtcExistenceTest.h: This header file declares the `CtcExistenceTest` class, which implements the existence tests.
- src/contractor/ibex_CtcExistenceTest.cpp: This source file defines the `CtcExistenceTest` class methods.

You can find these files in the `src/contractor/` directory. We invite you to explore these files to understand the underlying logic of the existence tests.
