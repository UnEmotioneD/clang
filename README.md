# C Projects

This repository contains various C programs. Below are the general instructions for compiling, building, and running C files.

## Prerequisites

Make sure you have a C compiler installed. Common options include:

- **GCC** (GNU Compiler Collection): `gcc`
- **Clang**: `clang`

To check if you have a compiler installed, run:

```sh
gcc --version  # or clang --version
```

If you don’t have a compiler, install one:

- **Ubuntu/Debian**: `sudo apt install gcc`
- **Arch Linux**: `sudo pacman -S gcc`
- **macOS (Homebrew)**: `brew install gcc`

---

## Compiling a C File

To compile a C file into an executable, use the following command:

```sh
gcc -o output_filename source_file.c
```

Example:

```sh
gcc -o hello hello_world/hello.c
```

This generates an executable named `hello` in the current directory.

---

## Running the Executable

After compiling, you can run the program with:

```sh
./output_filename
```

Example:

```sh
./hello
```

---

## Using a Makefile (Optional)

If your project has multiple source files, it’s better to use a `Makefile`. A simple `Makefile` might look like this:

```makefile
CC=gcc
CFLAGS=-Wall -Wextra -pedantic
TARGET=donut

all: $(TARGET)

$(TARGET): donut.c
	$(CC) $(CFLAGS) -o $(TARGET) donut.c

clean:
	rm -f $(TARGET)
```

To build using `make`, just run:

```sh
make
```

To clean up the compiled files:

```sh
make clean
```

---

## Troubleshooting

If you run into issues:

1. Make sure your compiler is installed correctly.
2. Check for typos in the filename or command.
3. Use `gcc -Wall -Wextra -pedantic -o output source.c` to show warnings.
4. If a library is missing, install the required package (e.g., `sudo apt install build-essential`).

---

## Contributing

Feel free to fork this repository, add your own C programs, and submit pull requests!

---

### Happy Hacking 🎉
