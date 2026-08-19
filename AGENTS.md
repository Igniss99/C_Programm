# AGENTS.md

This repository contains standalone C exercises and small programs. Most files are independent programs, and each one is typically built directly with GCC.

## Project conventions

- Keep changes focused to the active `.c` file unless there is a clear reason to touch the build setup.
- The project does not use a larger build system; most programs are compiled as single translation units.
- For project-level build guidance, use [README.md](README.md) and [.vscode/tasks.json](.vscode/tasks.json).

## Build and run

Use GCC from MSYS2 when compiling C files in this workspace:

```powershell
gcc <file>.c -o <file>.exe
```

The repo's task configuration already points to:

```json
"C:\\msys64\\ucrt64\\bin\\gcc.exe"
```

and uses a standard output path of the same directory.

## Code Runner / executorMap guidance

If VS Code Code Runner is configured for this repo, prefer a C executor mapping equivalent to:

```json
"c": "C:\\msys64\\ucrt64\\bin\\gcc.exe $fullFileName -o $fileNameWithoutExt.exe && $dir\\$fileNameWithoutExt.exe"
```

This matches the repo's workflow and keeps execution consistent with the existing `.vscode/tasks.json` setup.

## Working rules for AI agents

- Check the current file before editing; many programs are intentionally simple and self-contained.
- Prefer minimal edits that preserve the program's educational intent.
- Compile the changed file with GCC before claiming the fix is complete.
- Do not add a new build framework, makefile, or dependency manager unless the task explicitly requires it.
- Keep output and debugging focused on the file being worked on; avoid unrelated cleanup.
