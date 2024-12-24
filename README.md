# CMake Demo

> Copyright &copy; Tony's Studio 2024

---

Repository for [Modern C++ Project with CMake](https://www.tonys-studio.top/posts/Modern-C-Project-with-CMake/) ([Backup](https://lord-turmoil.github.io/posts/Modern-C-Project-with-CMake/)).

## Project Structure

```plaintext
.
|-- chapter_1
|   |-- demo_11     # demo
|   `-- demo_12     # classic project structure
|-- chapter_2
|   |-- demo_21     # library project
|   |-- demo_22     # header-only library project
|   `-- demo_23     # project with unit tests
`-- chapter_3       # comprehensive example
```

## Build Instructions

It can be built all together by running the following commands in the root directory of the project:

```bash
cmake -Bbuild
cmake --build build
```

Or, you can build each project separately at their own directories.
