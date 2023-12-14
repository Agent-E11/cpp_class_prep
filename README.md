# Class Prep

I am going to take a C++ class in Winter, this is preparation for that class.

All the "tasks" are in [`main.cpp`](./main.cpp), the `tools` folder is only for running/debugging the program.

## Running

Clone the repo:

```sh
git clone https://github.com/agent-e11/class_prep && cd class_prep
```

Compile:

I am using `g++`, you can use your own compiler

```sh
g++ ./main.cpp -o main
```

Execute:

```sh
./main.exe  # Windows
./main      # Linux/Mac
```

To change between the different tasks, change the function being run in `main`:

```cpp
int main() {
    return task_1();
}

// Change to:

int main() {
    return task_2();
}
```

Then rebuild it and run again
