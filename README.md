# Simple_shell

## Description
This is a simple UNIX Command Line Intepreter that copies the functionalities of shell (sh).

## Installation
Clone this repository into your working directory. Files should be compiled with GCC and the following flags: -Wall -Wextra -Werror -pedantic -Wno-format.

## Usage
Runs in  interactive or non-interactive mode.

## Interactive Mode
Run the program and wait for the prompt to appear. From there, you can type commands and when done exit with `ctrl+D` or `exit`.

## Non-Interactive Mode
Echo your desired command and pipe it into the program like this:

echo `"ls" | .hsh`

## AUTHORS
This file contains the details of all the individuals that contributed to this shell project.

## Features
`1.` Display a prompt and wait for the user to type a command. A command line always ends with a new line.
`2.` The prompt is displayed again each time a command has been executed.
`3.` The command lines are simple, no semicolons, no pipes, no redirections or any other advanced features.
`4.` The command lines are made only of one word. No arguments will be passed to programs.
`5.` If an executable cannot be found, prints an error message and display the prompt again.

## Omissions
PATH
Built-ins
Special characters : ", ', `, \, *, &, #
Cursor movements
Handling commands with arguments

## Credits
All codes written by Samora Kiage and Helidah Wagude.