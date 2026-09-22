# compilerTC

A type-checking front end for the small teaching language used in the UMGC
CMSC 430 (Compiler Theory and Design) projects, built with flex and bison
(project 4). It reads one function from standard input, parses it, and prints
a line-numbered listing with any lexical, syntax and semantic (type) errors.
It does not evaluate the program and does not generate code.

The language is one function with an optional parameter list (`integer`,
`real` or `character`), optional variable declarations (scalars, and
`list of` lists written as `(1, 2, 3)`), and a `begin ... end` body holding
one statement. The grammar covers plain expressions, `when` conditional
expressions, `if / elsif / else / endif` and `switch / case / others /
endswitch`. The scanner also recognizes the `fold`, `left` and `right`
keywords, but the grammar has no rule for a fold statement.

The type rules live in `types.cc`:

- a variable initializer must have the variable's declared type
- both branches of a `when` expression must have the same type
- a `switch` expression must be an integer, and every `case` must have the
  same type as the `others` branch
- arithmetic needs integer or real operands; integer with real gives real
- relational comparisons follow the arithmetic rule and yield boolean
- negation (`~`) needs an integer or real operand
- an `if` condition must be boolean

Identifiers that were never declared are reported as semantic errors.

## Build

Requires `flex`, `bison` 3.x, `g++` and `make`. The grammar uses `%empty` and
`%define parse.error verbose`, which Bison 2.x rejects (macOS ships Bison
2.3, so install a newer one there).

The repository also contains the generated `scanner.c`, `parser.c`,
`parser.tab.h`, `tokens.h` and `parser.output`, the object files, and a
Linux x86-64 `compile` binary from an earlier build. To rebuild everything
from the `.l` and `.y` sources regardless of those files:

```sh
make -B
```

`make` on its own may treat the committed outputs as up to date and skip
regeneration, depending on file timestamps after checkout.

## Run

```sh
./compile < program.txt
```

The listing goes to standard output and ends with `Compiled Successfully` or
a count of lexical, syntax and semantic errors.

## Layout

- `parser.y` - bison grammar with type-checking actions, the symbol tables,
  and `main()`
- `scanner.l` - flex rules; sets the literal type or identifier name in
  `yylval`
- `types.h`, `types.cc` - the `Types` enum and the `check*` functions
- `symbols.h` - `Symbols<T>`, a `map`-based symbol table template
- `listing.h`, `listing.cc` - line-numbered listing output and error counting
- `tokens.h` - copied from bison's `parser.tab.h` by the makefile
- `makefile` - build rules
- `scanner.c`, `parser.c`, `parser.tab.h`, `parser.output`, `*.o`,
  `compile` - generated output committed from a previous Linux build

Status: coursework project, kept for reference.
