delimiter $$
create function `nextval` (the_name varchar(45))
returns bigint unsigned
modifies sql data
deterministic
begin
declare ret bigint unsigned;
update sequences set currval = currval+1 where name=the_name;
select currval into ret from sequences where name= the_name;
return ret;
end