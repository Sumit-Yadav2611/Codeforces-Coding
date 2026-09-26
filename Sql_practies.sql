CREATE DATABASE IF NOT EXISTS college_db;

USE college_db;

CREATE TABLE IF NOT EXISTS students (
    student_id INT PRIMARY KEY,
    name VARCHAR(50),
    age INT,
    branch VARCHAR(50),
    marks INT
);

SELECT * FROM students;

INSERT INTO students 
(student_id ,name, age,branch,marks)
VALUES 
(1,'Rahul',20,'CSE',85),
(2,'Aman',21,'ECE',78),
(3,'Priya',20,'CSE',92),
(4,'Neha',22,'IT',88),
(5,'Ravi',21,'CSE',74);

SELECT *FROM students;
SELECT name,marks FROM students;

# Only CSE students
SELECT *FROM students
WHERE branch='CSE'; 

#Students have more than 80 marks
SELECT *FROM students
WHERE marks > 80;

# Find CSE students whose marks are greater than 80.
SELECT *FROM students
WHERE branch='CSE'
AND marks > 80;

#Q1- All students display karo.
SELECT *FROM students;

#Q2- Sirf name aur branch display karo.
SELECT name, branch FROM students;

#Q3- Jinke marks 75 se greater hain unko find karo.
SELECT *FROM students
WHERE marks > 75;

#Q4- Sirf CSE students find karo.
SELECT *FROM students
WHERE branch='CSE';

#Q5- CSE students jinke marks 80 se greater hain unko find karo.
SELECT *FROM students
WHERE marks > 80;

# 1. ORDER BY — Sorting Data
#Marks low → high
SELECT *FROM students
ORDER BY marks ASC;

#Marks low → high
SELECT *FROM students
ORDER BY marks DESC;

#-Interview-style question
#Find the student with the highest marks.
SELECT *FROM students
ORDER BY marks DESC
Limit 1;

#Second highest marks:
SELECT *FROM students
ORDER BY marks DESC
LIMIT 1 OFFSET 1;

#3rd highest marks:
SELECT *FROM students
ORDER BY marks DESC
LIMIT 1 OFFSET 2;

#3. DISTINCT => DISTINCT removes duplicate values from the result.
#Suppose you want to know which branches exist:
SELECT DISTINCT branch
FROM students;

#4. Multiple-column sorting
SELECT *FROM students
ORDER BY branch ASC, marks DESC;

#Practicecollege_db

#Q2 Find the top 3 students according to marks.
SELECT *FROM students
ORDER BY marks DESC
LIMIT 3;

#Q3- Display all students sorted by age from highest to lowest.
SELECT *FROM students
ORDER BY age DESC;

#Q4-Display all different branches.
SELECT DISTINCT branch 
FROM students;

#Q5 ⭐ Find the second-highest marks.
SELECT *FROM students
ORDER BY marks DESC
LIMIT 1 OFFSET 1;

#Q6 ⭐ Find the top 2 CSE students according to marks.
SELECT *FROM students
ORDER BY marks DESC
LIMIT 2;

#1. COUNT() ->How many students are there?
SELECT COUNT(*)
FROM students;

#AS means give this result a temporary name (alias).
SELECT COUNT(*) AS total_students
FROM students;

#2. SUM() -> Suppose we want the total marks.
SELECT SUM(marks) AS total_marks
FROM students;

#3. AVG()
SELECT AVG(marks) AS avg_marks
FROM students;

#4. MAX()
SELECT MAX(marks) AS highest_marks
FROM students;

#5. MIN()
SELECT MIN(marks) AS lowerst_marks
FROM students;

#⭐ Now the important part — WHERE + Aggregate
#Find the average marks of CSE students.
SELECT AVG(marks) AS cse_average
FROM students
WHERE branch ='CSE';

#GROUP BY 
#What is the average marks of each branch?
SELECT branch, AVG(marks) AS avg_marks
FROM students
GROUP BY branch;

#How many students are in each branch?
SELECT branch, COUNT(*) AS total_students
FROM students
GROUP BY branch; 

#HAVING ->Find branches having more than 1 student.
SELECT branch,COUNT(*) AS total_students
FROM students
GROUP BY branch
HAVING COUNT(*)>1;

#Find BRANCH having average marks greater than 50.
SELECT branch, AVG(marks) AS avg_marks 
FROM students 
GROUP BY branch
HAVING AVG(marks) > 50;

SELECT branch, AVG(marks)
FROM students
WHERE marks > 70
GROUP BY branch
HAVING AVG(marks) > 80
ORDER BY AVG(marks) DESC;

#Find the average marks of each branch.
SELECT branch, AVG(marks) AS avg_marks 
FROM students 
GROUP BY branch;

#Find branches where the number of students is greater than 1.
SELECT branch,COUNT(*) AS total_students
FROM students
GROUP BY branch
HAVING COUNT(*)>1;

#Find branches where the average marks are greater than 80.
SELECT branch, AVG(marks) AS avg_marks 
FROM students 
GROUP BY branch
HAVING AVG(marks) > 80;


