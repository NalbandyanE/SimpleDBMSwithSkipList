# SimpleDBMSwithSkipList

## Introduction
This is a Database Management System (DBMS) project that employs the SkipList data structure for indexing purposes. The project is designed to manage tables, rows, and indexing using the SkipList data structure.

## Features
- **Table Management:** The DBMS allows the creation, insertion, selection, update, and deletion of rows in user-defined tables.
- **SkipList Indexing:** The project employs the SkipList data structure to create and manage indexes on specified columns of tables. SkipList provides efficient search and insertion operations.
- **SQL-like Commands:** The DBMS accepts SQL-like commands for performing various operations on tables, including creating tables, inserting rows, updating rows, selecting data, and deleting rows based on conditions.

## How to Use
- **Compilation:** Compile the project using a C++ compiler. Ensure that the necessary dependencies are properly included.
- **Executing the Program:** Run the compiled executable to start the DBMS. It will present a command prompt where you can enter SQL-like commands to interact with the database.
- **Supported Commands:** Supported commands include CREATE DATABASE, CREATE TABLE, INSERT INTO, SELECT, UPDATE, and DELETE. The DBMS processes these commands using the SkipList indexing approach.

## Project Structure
- **src/:** Contains the source code files for the project.
- **include/:** Contains header files required for compilation.
- **data/:** Directory to store the data files associated with tables.

## SkipList Implementation
The SkipList data structure is used to provide efficient indexing capabilities for the DBMS. It allows for faster search, insertion, and deletion operations, enhancing the performance of querying and updating the data.

## Commands
- `CREATE DATABASE <db_name>;` - Creates a new database with the given name.
- `CREATE TABLE <table_name>;` - Creates a new table with the given name.
- `INSERT INTO <table_name> (<column1>, <column2>, ...) VALUES (<value1>, <value2>, ...);` - Inserts a new row of data into the table.
- `SELECT <column1>, <column2>, ... FROM <table_name>;` - Queries data from the table and retrieves the specified columns.
- `UPDATE <table_name> SET <column1>=<value1>, <column2>=<value2>, ... WHERE <condition>;` - Updates data in the table based on the specified condition.
- `DELETE FROM <table_name> WHERE <condition>;` - Delete data from table based on the specified condition.

### Installation

1. Clone the repository:
   ```bash
   git clone https://github.com/NalbandyanE/SimpleDBMSwithSkipList.git
   ```
2. Compile the source files using your preferred C++ compiler:
   ```bash
   cd SimpleDBMSwithSkipList
   ```
   ```bash
   g++ src/field.cpp src/row.cpp src/table.cpp src/dbms.cpp src/command.cpp src/commandValidator.cpp src/commandExecutor.cpp src/skiplist.cpp main.cpp
   ```
3. Run the executable:
   ```bash
   ./a.out
   ```

## Contributing
Contributions to this project are welcome! If you find any issues, feel free to report them in the issue tracker.
