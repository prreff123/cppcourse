create database sqlwork;
use sqlwork;

create table student(
id int,
_name varchar(100),
email varchar(100),
mobile_no numeric,
qualification varchar(100)
);

describe table student;
insert into student values(1,"Priyanshu Jain","priyanshujain09062003@gmail.com",7389837625,'Btech');
insert into student values(2,"Ayush Hedaoo","hedaoo151@gmail.com",2546258945,'Btech');
insert into student values(3,"samyak Jain","samyak8585@gmail.com",6598251448,'Btech');
insert into student values(4,"Priyanshu Patil","pp065@gmail.com",8855226698,'Btech');

select * from student;
set sql_safe_updates = 0;

delete from student;
