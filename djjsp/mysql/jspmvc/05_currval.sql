delimiter $$
create function `currval` (the_name varchar(45))
returns bigint unsigned
modifies sql data
deterministic
begin
declare ret bigint unsigned;
select ifnull(max(currval),1) into ret from sequences where name= the_name;
return ret;
end