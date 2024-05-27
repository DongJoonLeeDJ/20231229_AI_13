create database mvcspringdev;
use mvcspringdev;
create table book
(
book_id int primary key auto_increment,
title varchar(200) not null,
category varchar(200) default '',
price int,
insert_date datetime default now()
);




