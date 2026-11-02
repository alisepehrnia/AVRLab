# 🔬 AVRLab – AVR Microcontroller Lab Sessions & Exercises

A collection of **AVR microcontroller lab sessions, exercises, and a final project** completed for a Software Engineering BSc course.  
The repository pairs **written lab reports** with the **AVR C source code** and **Proteus simulation files** used to build, program, and test each exercise.

> **Repository description:** *“AVR Microcontroller lab (software engineering bsc) sessions & excercises. CodeVision AVR + Proteus”* [reference:0]

---

## 📖 Overview

The repository is organised into four main parts:

- **`Session1` – `Session8`** — lab reports (Word `.docx` and PDF) for eight lab sessions.
- **`AVRSrc/`** — AVR C source code organised by exercise (`Az1`, `Az2`, …), including “Tamrin” (exercise) variants.
- **`ProteusPrjs/`** — Proteus simulation project files (`.pdsprj`) corresponding to the exercises.
- **`ExerciseForFinal/`** — a complete **CodeVision AVR** project for the final exercise, including `.c`, `.prj`, `.cproj`, and build artefacts.
- **`final/`** — an additional folder for final-project material.

Together, the reports explain what each lab required, the source code shows the AVR C implementation, and the Proteus projects let you simulate the circuits.

---

## 🗂️ Repository Structure

```text
AVRLab/
├── Session1/          # Lab reports (docx + pdf)
├── Session2/
├── Session3/
├── Session4/
├── Session5/
├── Session6/
├── Session7/
├── Session8/
├── AVRSrc/            # AVR C source code
│   ├── Az1/
│   ├── Az1-2/
│   ├── Az1-3/
│   ├── Az1_Tamrin/
│   ├── Az1_Tamrin2/
│   ├── Az2-1/
│   ├── Az2-2/
│   ├── Az2-Tamrin/
│   ├── Az3-1/
│   └── Az3-2/
├── ProteusPrjs/       # Proteus simulation projects (.pdsprj)
│   ├── Az1-1.pdsprj
│   ├── Az1-2.pdsprj
│   ├── Az1-3.pdsprj
│   ├── Az1-Tamrin.pdsprj
│   ├── Az1-Tamrin1.pdsprj
│   ├── Az1-Tamrin2.pdsprj
│   ├── Az1.pdsprj
│   ├── Az2-1.pdsprj
│   ├── Az2-2.pdsprj
│   └── …
├── ExerciseForFinal/  # CodeVision AVR final project
│   ├── Debug/
│   ├── s1-az1.atsln
│   ├── s1-az1.c
│   ├── s1-az1.cci
│   ├── s1-az1.cof
│   ├── s1-az1.cproj
│   ├── s1-az1.cwp
│   ├── s1-az1.c~
│   ├── s1-az1.fct
│   └── s1-az1.prj
├── final/             # Additional final-project material
└── README.md
```

## 🧪 Lab Sessions (`Session1` – `Session8`)

Each session folder contains one or more **lab reports** in both `.docx` and `.pdf` format.  
The reports follow a naming pattern such as:

- `MicroLab1(Exercises)_AliSepehrnia.docx`
- `MicroLab1_AliSepehrnia.docx`
- `MicroLab1_AliSepehrnia.pdf`

A typical report documents the objective of the lab, the circuit schematic, the AVR C program, simulation results (usually from Proteus), and any analysis or conclusions.

| Session      | Report files (examples)                                                                                                                      |
| ------------ | -------------------------------------------------------------------------------------------------------------------------------------------- |
| **Session1** | `MicroLab1(Exercises)_AliSepehrnia.docx`, `MicroLab1_AliSepehrnia.docx`, `MicroLab1_AliSepehrnia.pdf`, `MicroLabE1_AliSepehrnia.pdf`         |
| **Session8** | `MicroLab8(Exercise)_AliSepehrnia.docx`, `MicroLab8(Exercise)_AliSepehrnia.pdf`, `MicroLab8_AliSepehrnia.docx`, `MicroLab8_AliSepehrnia.pdf` |

> Session folders 2–7 follow the same pattern with their corresponding lab numbers.

---
## 💻 AVR Source Code (`AVRSrc`)

The `AVRSrc/` directory contains the **AVR C source code** for the lab exercises, organised by exercise number:

| Folder                      | Likely content                                       |
| --------------------------- | ---------------------------------------------------- |
| `Az1`, `Az1-2`, `Az1-3`     | Exercise 1 and its variants                          |
| `Az1_Tamrin`, `Az1_Tamrin2` | Exercise 1 homework (“Tamrin” = exercise in Persian) |
| `Az2-1`, `Az2-2`            | Exercise 2                                           |
| `Az2-Tamrin`                | Exercise 2 homework                                  |
| `Az3-1`, `Az3-2`            | Exercise 3                                           |

Each subfolder typically contains the `.c` source file(s) and any CodeVision AVR project files needed to compile and program the microcontroller.

---
## 🔌 Proteus Simulations (`ProteusPrjs`)

The `ProteusPrjs/` folder holds the **Proteus project files** (`.pdsprj`) used to simulate the circuits for the exercises.  
The filenames mirror the `AVRSrc` folders:

- `Az1-1.pdsprj`, `Az1-2.pdsprj`, `Az1-3.pdsprj`
- `Az1-Tamrin.pdsprj`, `Az1-Tamrin1.pdsprj`, `Az1-Tamrin2.pdsprj`
- `Az2-1.pdsprj`, `Az2-2.pdsprj`, …

To run a simulation:

1. Open the `.pdsprj` file in **Proteus 8+**.    
2. Load the corresponding `.hex` file (compiled from the AVR C source) into the microcontroller component.
3. Run the simulation.

> The `.hex` files are not included in the repository; you must compile the `.c` source in CodeVision AVR (or another AVR toolchain) to produce them.
---
## 🏁 Final Exercise (`ExerciseForFinal` + `final`)

The **`ExerciseForFinal/`** folder contains a complete **CodeVision AVR project** for the final exercise:

| File                                     | Role                                      |
| ---------------------------------------- | ----------------------------------------- |
| `s1-az1.c`                               | Main AVR C source file                    |
| `s1-az1.prj`                             | CodeVision AVR project file               |
| `s1-az1.cproj`                           | CodeVision AVR project file (XML)         |
| `s1-az1.atsln`                           | Atmel Studio solution (if compatible)     |
| `s1-az1.cwp`                             | CodeVision AVR workspace                  |
| `s1-az1.cci`, `s1-az1.cof`, `s1-az1.fct` | CodeVision AVR configuration/output files |
| `s1-az1.c~`                              | Backup of the C source                    |
| `Debug/`                                 | Build output directory                    |

The separate **`final/`** folder contains additional final-project material (reports or supplementary code).

> The `ExerciseForFinal` project can be opened directly in **CodeVision AVR** (the `.prj` file) or, where compatible, in **Atmel Studio** (`.atsln`).

---
## 🛠️ Tools & Technologies

| Item                     | Details                                                                                                                                                                            |
| ------------------------ | ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **Microcontroller**      | AVR (likely ATmega series)                                                                                                                                                         |
| **Programming language** | C (AVR‑GCC / CodeVision AVR C)                                                                                                                                                     |
| **IDE / Compiler**       | **CodeVision AVR** (primary, per repository description) ; Atmel Studio solution also included for the final project[](https://github.com/alisepehrnia/AVRLab/blob/main/README.md) |
| **Simulation**           | **Proteus** (`.pdsprj` project files)                                                                                                                                              |
| **Reports**              | Microsoft Word (`.docx`) and PDF                                                                                                                                                   |

---
## 🚀 How to Use

### Reading the lab reports

Open any `.pdf` directly, or open the `.docx` files in **Microsoft Word**, **LibreOffice Writer**, or **Google Docs**.  
Start with `Session1` and proceed sequentially through `Session8`.

### Compiling and running the AVR C code

1. Open **CodeVision AVR**.
2. Open the `.prj` file for the exercise you want (e.g., `ExerciseForFinal/s1-az1.prj`).
3. Build the project to generate a `.hex` file.
4. Load the `.hex` file into the AVR microcontroller in the corresponding **Proteus** project.

### Simulating in Proteus

1. Open the `.pdsprj` file from `ProteusPrjs/`.
2. Double‑click the AVR microcontroller component and set the **Program File** to the `.hex` you compiled.
3. Run the simulation.

### Matching exercises to files

The `AVRSrc/`, `ProteusPrjs/`, and `SessionN/` naming is **roughly aligned** but not perfectly one‑to‑one.  
Use the report content (circuit schematic and program description) to identify which `.c` file and which `.pdsprj` belong to each lab session.

---

## 📝 Notes & Caveats

- **Reports are the primary documentation.** The `.docx`/`.pdf` files explain each lab; the source code and Proteus projects are supporting material.    
- **Compiled `.hex` files are not included.** You must build the AVR C source to produce the firmware for simulation.
- **CodeVision AVR is the primary toolchain** — the repository description explicitly names it, and the final project uses CodeVision project files (`.prj`, `.cproj`, `.cwp`). Atmel Studio compatibility is partial (the `.atsln` file may or may not open cleanly depending on the version).
- **Folder naming:** “Az” likely stands for “Azmoon” (exam) or exercise numbering; “Tamrin” means “exercise/homework” in Persian.
- **Proteus version:** Older `.pdsprj` files may not open in the newest Proteus releases; if that happens, try a version closer to the project’s original release.

---
## 🤝 Contributing

This is a personal coursework archive.  
If you spot missing files, want to add a mapping table between sessions and exercises, or can supply compiled `.hex` files, feel free to open an issue or submit a pull request.

---
## 📄 License

Feel free to use :)
