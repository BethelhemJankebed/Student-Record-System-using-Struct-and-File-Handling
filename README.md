# 🎓 Student Record System (C++ Struct + File Handling)

This is a simple C++ program that collects student information (ID, name, mark), calculates their grade (Pass/Fail), and stores the data in a text file. It also reads the data back from the file and displays it.

---

## 📋 Features

- Collects data for multiple students using a `struct`
- Automatically assigns a grade:
  - `'P'` (Pass) if the mark is **≥ 50**
  - `'F'` (Fail) if the mark is **< 50**
- Writes all student records to a file (`struct.txt`)
- Reads and displays the file contents

---

## 💻 How to Run

1. Make sure you have a C++ compiler installed (like `g++`)
2. Save the file as `main.cpp`
3. Compile the code:

   ```bash
   g++ main.cpp -o student_app
   sample output
How many students are there? 2

Enter the ID of student 1: 101
Enter the name of student 1: Alice
Enter the mark of student 1: 78

Enter the ID of student 2: 102
Enter the name of student 2: Bob
Enter the mark of student 2: 45

Data written to file successfully.

Contents of the file:
ID	Name	Mark	Grade
101	Alice	78	P
102	Bob	45	F
