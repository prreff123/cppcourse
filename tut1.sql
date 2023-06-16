create database PJData;
use PJData;
show databases;
create table student_table(
     student_id int,
     student_name varchar(100),
	 course_name varchar(50)
);
drop database PJData;
describe student_table;
alter table student_table add mobile_number numeric;

insert into student_table (student_id,student_name,course_name,mobile_number)
values (1,"Priyanshu Jain",'Btech',7389837625);
insert into student_table (student_id,student_name,course_name)
values (2," Samyak Jain",'CA');
insert into student_table (student_id,student_name,course_name)
values (3,"Ayush",'Bcom');
insert into student_table (student_id,student_name,course_name)
values (4,"Priyanshu patil",'Mtech');
insert into student_table (student_id,student_name,course_name)
values (5,"Ritesh singh",'MCA');
insert into student_table (student_id,student_name,course_name)
values (6,"sanket",'BE');
insert into student_table (student_id,student_name,course_name)
values (7,"Ritik Pillai",'BCA');

delete from student_table where student_name ='Priyanshu Jain';

set sql_safe_updates = 0;
select * from student_table;

