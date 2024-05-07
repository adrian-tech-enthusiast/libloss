## Lib Loss: A C Library for Neural Network Loss Functions.

`Lib Loss` is a high-performance C library designed to provide developers and researchers with a comprehensive collection of essential loss functions. These functions are crucial for the training, evaluation, and experimentation of neural networks across various applications. Whether you're developing deep learning models or conducting academic research, Lib Loss offers efficient and accurate tools to implement loss functions.

## Key Features

- **Comprehensive Loss Functions**: Includes a broad range of loss functions such as Mean Squared Error, Cross-Entropy Loss, Hinge Loss, and many others.
- **Optimized for Performance**: Engineered for maximum computational efficiency with highly optimized C code.
- **Extensive Unit Testing**: Each loss function is accompanied by robust unit tests covering a variety of input scenarios to ensure reliability and correctness.
- **Easy Integration**: Simple design for easy integration into existing projects or for use in new neural network developments.
- **Cross-Platform Compatibility**: Works across multiple operating systems, offering flexibility in development environments.
- **Extensibility**: Framework designed to be easily extendible for adding custom loss functions.
- **Open Source**: Actively maintained and welcoming community contributions.

## Target Audience

`Lib Loss` is suited for computer science students, AI researchers, and professional developers involved in machine learning projects that necessitate efficient and effective implementation of loss functions in C.

### Prerequisites

Ensure you have a C compiler installed on your system, such as `gcc` or `clang`.

## Getting Started

To start using `Lib Loss`, clone the repository, include it in your project and refer to the documentation for
guidance on how to implement each function within your neural networks.

## Installation

To make sure you obtain the most updated stable version
of [shared library](https://en.wikipedia.org/wiki/Library_(computing)#Shared_libraries)(a DLL in Windows or .so in
Unix/Linux), you’ll download this software from
its [official Github repository](https://github.com/adrian-tech-enthusiast/libloss).

First, confirm the latest version available in
their [releases page](https://github.com/adrian-tech-enthusiast/libloss/releases). At the time of this writing,
the most current stable version is `1.0.0`.

1. The following command will download the `1.0.0` release and save the shared library file at
   /usr/local/lib/libloss.so, which will make this library globally accessible to clients:

    ```bash
    sudo curl -L "https://github.com/adrian-tech-enthusiast/libloss/releases/download/v1.0.0/libloss.so" -o /usr/local/lib/libloss.so
    ```

2. Next, We need to tell the loader it is available for use, so let us update the cache, invoke the `ldconfig` utility,
   which configures the system's dynamic loader. This configuration ensures that the loader will find the newly
   published library:

    ```bash
    sudo ldconfig;
    ```

   That should create a link to our shared library and update the cache so it is available for immediate use. To verify
   you can run:

    ```bash
    ldconfig -p | grep loss
    ```

3. Copy the library header file(`loss.h`) to where it can be included in one of the C compiler's search path.
   Typical locations are `/usr/include` and `/usr/local/include`;

    ```bash
    sudo curl -L "https://raw.githubusercontent.com/adrian-tech-enthusiast/libloss/v1.0.0/include/loss.h" -o /usr/local/include/loss.h;
    ```

   This allows the library header file to be included in your C project as follows:

    ```c
    #include <stdio.h>  /* standard input/output functions */
    #include <loss.h> /* C Loss Library functions */
    ```
   Without this `#include`, the compiler would complain about missing declarations for functions provided by the C
   Loss Library.

4. Finally, in order to compile your code with the library, add the link flag to the library during the compilation of
   your C project:

    ```bash
    gcc -o tester tester.c -lloss
    ```

## Example Usage

This section provides basic examples of how to integrate `Lib Loss` functions into your neural network projects.
Here we demonstrate the usage of the popular loss function: Mean Squared Error.

#### Including the Library

First, ensure that the `Lib Loss` library is correctly included in your C source files:

```c
#include <loss.h> /* C Loss Library functions */
```

#### Example 1: Using the Mean Squared Error Loss Function

The Mean Squared Error function is commonly used in neural networks for binary classification. Here's how you can use it:

```c
#include <stdio.h>
#include <loss.h> /* C Loss Library functions */

int main() {
    double y_true = 1.0;
    double y_pred = 0.9;
    double output;

    output = iquadratic_loss(y_true, y_pred);
    printf("Mean Square Error / Quadratic Loss Function: %f\n", output);

    return 0;
}
```

#### Compiling the Code

To compile your program, you might use a command like this, depending on your setup:

```bash
gcc -o my_neural_network my_neural_network.c -lloss
```

Replace `my_neural_network.c` with the name of your source file. Make sure that the loss library is correctly linked.

#### Additional Tips

- Always test loss functions with different inputs to understand their behavior.
- Refer to the `Lib Loss` documentation for more advanced usage, including other available loss functions
  and performance considerations.

## Contributions

Contributions are what make the open-source community such an amazing place to learn, inspire, and create. Any
contributions you make are greatly appreciated.

1. Fork the Project
2. Create your Feature Branch (`git checkout -b feature/AmazingFeature`)
3. Commit your Changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the Branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

## License

This library is licensed under the `GNU General Public License v3.0` License. See the LICENSE file for details.

## Contact

For any inquiries, please reach out to Mr. Adrián Morelos via email at adrian.tech.enthusiast@gmail.com.
