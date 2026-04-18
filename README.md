# get_next_line

## What this does
Reads a file line by line in C, returning one line at a time.

## Why it matters
Useful for handling large files efficiently without loading everything into memory.

## Features
- Reads from file descriptors
- Handles multiple files
- Memory-efficient

## Example
Input file:
Hello
World

Output:
Hello
World

## How to use
Compile with your project and call:
get_next_line(fd);
