create database mysqldemo;
use mysqldemo;
drop database mysqldemo;

show databases;
create table student_table(
    student_id int,
    student_name varchar(100),
    course_name VARCHAR(40)
);
show tables;
describe student_table; 
truncate table student_table;
alter table student_table add email varchar(100);

insert into student_table (student_id,student_name,course_name,email)
values (1,"Priyanshu Jain",'Btech','priyanshujain09062003@gmail.com');
 
insert into student_table (student_id,student_name,course_name,email)
values (2,"PJ",'BE','priyanshu@gmail.com');

insert into student_table (student_id,student_name,course_name,email)
values (3,"DJ",'Bcom','Dj@gmail.com');

insert into student_table (student_id,student_name,course_name,email)
values (4,"Rinku",'ME','rinku@gmail.com');

insert into student_table (student_id,student_name,course_name,email)
values (5,"Romil",'BE','romil@gmail.com');

set sql_safe_updates = 0;
delete from student_table;
select student_id,email, student_name,course_name from student_table;
select * from student_table;
select * from student_table where course_name in ('ME','BE')
