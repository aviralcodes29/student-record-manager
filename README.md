# 🎓 C Student Record Manager

A simple **console-based Student Record Manager** written in C.  
You can add students, list all students, and search a student by ID using a menu-driven interface.

---

## ✨ Features

- Add a student with:
  - ID
  - Name
  - Age
- List all saved students in the current session
- Search for a student by their ID
- Simple menu-based navigation in the terminal

This project is perfect for practicing:
- `struct` in C
- arrays
- basic input/output
- loops and conditionals

---

## 🧰 Tech stack

- Language: **C**
- Interface: **Console / Terminal**
- Storage: In-memory array (no files yet)

---

## 📂 Project structure

```text
c-student-record-manager/
│── main.c    # main C source file (all logic here)
└── README.md # this documentation
```

---

## 🛠️ How to compile and run (Windows, using gcc)

1. Open a terminal in the project folder:

```bash
cd c-student-record-manager
```

2. Compile the program (requires `gcc` installed and in PATH):

```bash
gcc main.c -o student_manager
```

3. Run the generated executable:

```bash
student_manager.exe
```

---

## 🧪 Example usage

```text
=== Student Record Manager (C) ===
1. Add student
2. List all students
3. Search student by ID
4. Exit

Choose an option (1-4): 1

Enter student ID: 101
Enter student name: Aviral
Enter student age: 18

Student added successfully!

Choose an option (1-4): 2

List of students:
-----------------------------
ID: 101 | Name: Aviral | Age: 18
```

---

## 🔮 Future improvements

- Save and load student records from a file
- Update and delete student records
- Store marks and calculate grades
- Sort students by name, age, or ID

---

> Built by **Aviral (Aviralcodes29)** in C as a beginner console project.